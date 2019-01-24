// input == 3 4 -1 6 -1 -1 5 1 -1 -1 -1 

#include <iostream>
#include<queue>
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

node* buildTree(){
    int d;
    cin>>d;

    if(d==-1){
        return NULL;
    }
    node * root = new node(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

int heightOfTree(node*root){
	if(root==NULL){
		return 1;
	}

	int h1 = heightOfTree(root->left);
	int h2 = heightOfTree(root->right);

	return max(h1,h2) + 1;
}

void printKthLevel(node *root, int k){
	if(root==NULL){
		return;
	}
	if(k==1){
		cout<<root->data<<" ";
	}
	printKthLevel(root->left, k-1);
	printKthLevel(root->right, k-1);

}

void printAllLevels(node *root,int h){

	for(int i=0; i<=h; i++){
		printKthLevel(root,i);
		cout<<endl;
	}

}

int countAllNodes(node *root){
	if(root==NULL){
		return 0;
	}
	int count =0;
	count+=countAllNodes(root->left);
	count+=countAllNodes(root->right);
	count += 1;
	return count;
	
}

void printAllLevelsBFS(node*root){
	if(root==NULL){
		return;
	}

	queue<node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		node* f= q.front();
		if(f==NULL){
			cout<<endl;
			q.pop();
			if(!q.empty()){
				q.push(NULL);
			}
		}
		else{
		cout<<f->data<<",";
		q.pop();
		// cout<<endl;
		if(f->right){
			q.push(f->right);
		}
		if(f->left){
			q.push(f->left);
		}
		}
	}
	return;
}

void print(node *root){
    if(root==NULL){
        return;
    }
    //Otherwise, print root first followed by subtrees(children)
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}

int diameter(node* root){
	if(root == NULL){
		return 0;
	}
	int h1 = heightOfTree(root->left);
	int h2 = heightOfTree(root->left);
	int op1 = h1 + h2;
	int op2 = diameter(root->left);
	int op3 = diameter(root->right);

	return max(op1,max(op2,op3));
}

class Pair{
	public:
	int height;
	int diamter;
};

Pair fasterDiameter(node *root){
	Pair p;
	if(root == NULL){
		p.height=p.diamter=0;
		return p;
	}

	Pair left = fasterDiameter(root->left);
	Pair right = fasterDiameter(root->right);

	p.height = max(left.height,right.height) + 1;
	p.diamter = max(left.height+right.height, max(left.diamter,right.diamter));
	return p;
}

int sumReplacement(node *root){
	if(root==NULL){
		return 0;
	}

	if(root->left==NULL and root->right==NULL){
		return root->data;
	}

	root->data = sumReplacement(root->left) + sumReplacement(root->right);

	return root->data;


}

class HBPair{
	public:
	int height;
	bool balanced;
};

HBPair isHeightBalanced(node*root){
	HBPair P;
	if(root==NULL){
		P.height = 0;
		P.balanced = true;
		return P;
	}

	HBPair leftBalance = isHeightBalanced(root->left);
	HBPair rightBalance = isHeightBalanced(root->right);

	P.height = max(leftBalance.height,rightBalance.height) + 1;

	if(abs(leftBalance.height-rightBalance.height)<=1 and leftBalance.balanced and rightBalance.balanced){
		P.balanced = true;
	}
	else {
		P.balanced = false;
	}

	return P;


}


node* buildTreefromArray(int *a, int s, int e){
	int mid = (s + e)/2;

	if(s>e){
		return NULL;
	}
	node *root= new node(a[mid]);
	root->left = buildTreefromArray(a,s, mid-1);
	root->right = buildTreefromArray(a,mid+1,e);

	return root;

}

node* createTreeFromTrav(int * in, int *pre, int s, int e){
	static int i =0;
	// Base Case 
	if(s>e){
		return NULL;
	}
	// Rec Case

	node *root = new node(pre[i]);

	int index = -1;
	for(int j=s; j<=e; j++){
		if(in[j]==pre[i]){
			index = j;
			break;
		}
	}
	i++;
	root->left = createTreeFromTrav(in,pre,s,index-1);
	root->right = createTreeFromTrav(in,pre,index+1,e);
	return root;
}



int main(){ 
    // node* root = buildTree();

	// int h = heightOfTree(root);

	// // printAllLevels(root,h);

	// printAllLevelsBFS(root);

	// root->data = sumReplacement(root);

	// printAllLevelsBFS(root);

	// cout<<countAllNodes(root);

	// cout<<endl<<diameter(root);

	int in[] = {3,2,8,4,1,6,7,5};
	int pre[] = {1,2,3,4,8,5,6,7};
	int n = sizeof(in)/sizeof(int);


	node*root=createTreeFromTrav(in,pre,0,n-1);
	printAllLevelsBFS(root);


return 0;
}
