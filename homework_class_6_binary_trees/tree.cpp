#include<iostream>
using namespace std;

class Node{
public:
	int data;
	Node *right;
	Node *left;

	Node(int d){
		data = d;
		right = NULL;
		left = NULL;
	}
};

Node* buildTree(){ // building in PreOrder
	int d;
	cin>>d;
	if(d==-1){
		return NULL;
	}
	Node* root;
	root = new Node(d);
	root->left = buildTree();
	root->right = buildTree();
	return root;
}

void printTree(Node* root){ // PreOrder
	if(root==NULL){
		return ;
	}
	cout<<root->data;
	printTree(root->left);
	printTree(root->right);
	return ;
}

void printInOrderTree(Node* root){
	if(root == NULL){
		return;
	}
	printTree(root->left);
	cout<<root->data<<" ";
	printTree(root->right);
	return;

}

void printPostOrderTree(Node* root){
	if(root==NULL){
		return;
	}
	printTree(root->left);
	printTree(root->right);
	cout<<root->data<<" ";
	return;
}

void PrintKthLevel(Node* root, int k){
	if(root==NULL){
		return;
	}
	if(k==1){
		cout<<root->data<<" ";
		return;
	}

	PrintKthLevel(root->left, k-1);
	PrintKthLevel(root->right, k-1);
}

int height(Node *root){
	if(root==NULL){
		return 0;
	}

	int left_side = height(root->left);
	int right_side = height(root->right);

	return 1+max(left_side,right_side);
}

void printAllLevels(Node* root){
	int max_height = height(root);
	for(int i=1; i<=max_height; i++){
		PrintKthLevel(root,i);
	}
	return;

}

void mirrorTree(Node* root){
	if(root==NULL){
		return;
	}
	swap(root->left, root->right);
	mirrorTree(root->left);
	mirrorTree(root->right);
	return;
}

class Pair{
public:
	int height;
	int diameter;
};


Pair returnDiamter(Node *root){
	Pair p;
	if(root==NULL){
		p.height=0;
		p.diameter=0;
		return p;
	}
	int hl = height(root->left);
	int hr = height(root->right);
	p.height = 1 + max(hl,hr);

	int op1 = max(returnDiamter(root->left).diameter,returnDiamter(root->right).diameter);
	p.diameter = max(op1,hl+hr);
	return p;
}

int diameterOfBT(Node* root){
	if(root==NULL){
		return 0;
	}
	int h1 = height(root->left);
	int h2 = height(root->right);
	int o1 = h1+h2;
	int o2 = max(diameterOfBT(root->left), diameterOfBT(root->right));

	return max(o1,o2);
}

int main(int argc, char const *argv[])
{
	
	return 0;
}
