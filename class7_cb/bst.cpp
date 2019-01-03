#include<iostream>

using namespace std;


class node{
    public:
    int data;
    node*left;
    node*right;

    node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};

node* insertInBST(node* root, int data){
	if(root==NULL){
		return new node(data);
	}

	if(data<root->data){
		root->left = insertInBST(root->left,data);
	}
	else{
		root->right = insertInBST(root->right,data);
	}

	return root;

}


void print(node *root){
    if(root==NULL){
        return;
    }
    // Otherwise print root , followed by subtrees

    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
	return;
}

node* buildBST(){
	node*root = NULL;
	int d;
	cin>>d;
	while(d!=-1){
		root = insertInBST(root,d);
		cin>>d;
	}
	return root;
}

// istream& operator>>(istream &a,node*root){
// 	root = buildBST();
// 	return a;
// }

bool search(node *root, int key){
	if(root==NULL){
		return false;
	}
	if(root->data==key){
		return true;
	}
	if(root->data < key){
		return search(root->right,key);
	}
	return search(root->left,key);
}

node* removeNode(node*root, int key){

	if(root == NULL){
		return NULL;
	}

	if(root->data < key){
		root->right = removeNode(root->right,key);
	}
	else if(root->data > key){
		root->right = removeNode(root->right,key);
	} 
		// Equal
		// 0 child
		if(root->left==NULL and root->right!=NULL){
			delete root;
			return NULL;
		}
		// 1 Child
		if(root->left!=NULL and root->right==NULL){
			node*temp = root->left;
			delete root;
			return temp;
		}
		if(root->left==NULL and root->right!=NULL){
			node*temp = root->right;
			delete root;
			return temp;
		}
		// 2 children
		node*temp = root->right;
		while(temp->left!=NULL){
			temp = temp->left;
		}
		root->data = temp->data;
		root->right = removeNode(root->right, root->data);
		return root;

}


void printInorder(node*root){
    if(root==NULL){
        return ;
    }
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
	return;
}

node* buildBalancedBSTfromArr(int *arr, int start, int end){
	// base case
	if(start>end){
		return NULL;
	}
	
	
	
	int mid =(start+end/2);
	node*root=new node(arr[mid]);
	

	root->left = buildBalancedBSTfromArr(arr,start, mid-1);
	root->right = buildBalancedBSTfromArr(arr,mid+1, end);
	return root;
}

class LinkedList{
	public:
	node*head;
	node*tail;
};

LinkedList tree2LL(node*root){
	// Base Case
	LinkedList a;
	if(root == NULL){
		a.head = NULL;
		a.tail = NULL;
		return a;
	}
	

	// Corner & rec cases
	if(root->left == NULL and root->right == NULL ){
		a.head = root;
		a.tail = root;
		return a;
	}

	if(root->left == NULL and root->right!=NULL){
		// a.head = A.tail = root;
		// a.head = root;
		LinkedList rightLL = tree2LL(root->right);
		root->right = rightLL.head;
		a.head = root;
		a.tail = rightLL.tail;
		return a;
	}

	if(root->right== NULL and root->left!=NULL){
		LinkedList leftLL = tree2LL(root->left);
		leftLL.tail->right = root;
		a.head = leftLL.head;
		a.tail = root;
		return a;
	}


	// both are not NULL
	LinkedList leftLL,rightLL;
	leftLL = tree2LL(root->left);
	rightLL = tree2LL(root->right);
	leftLL.tail -> right = root;
	root->right = rightLL.head;
	a.head = leftLL.head;
	a.tail = rightLL.tail;
	return a;

}

int main(int argc, char const *argv[])
{
	node*root = NULL;
	// cin>>root;
	// print(root);
	buildBST();
	int d;
	cin>>d;
	root = removeNode(root,d);
	// print(root);
	printInorder(root);
	return 0;
}


// 8 3 10 1 6 14 4 7 13 -1
