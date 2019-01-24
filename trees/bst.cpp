#include<iostream>
using namespace std;

class Node{
    public: 
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* insertInBST(Node *root, int data){
    if(root==NULL){
        return new Node(data);
    }

    if(data<root->data){
        root->left = insertInBST(root->left,data);
    } else {
        root->right = insertInBST(root->right,data);
    }

    return root;
}

void buildTree(){
    int data;
    cin>>data;

    Node*root = NULL;

    while(data!=-1){
        root = insertInBST(root,data);
        cin>>data;
    }

}

void printTree(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    printTree(root->left);
    printTree(root->right);
}

bool searchInTree(Node* root, int data){
    if(root==NULL){
        return false;
    }
    if(root->data==data){
        return true;
    }
    
    if(data<root->data){
        return searchInTree(root->left,data);
    } else{
        return searchInTree(root->right,data);
    }

}

Node* deletionOfNode(Node*root, int data){
    if(root==NULL){
        return NULL;
    }
    else if(data<root->data){
        root->left = deletionOfNode(root->left,data);
        return root;
    }
    else if(data==root->data){
        // Found the node to delete 3 Cases
        // 1. Node with 0 children
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        // 2. Node with 1 child
        if(root->left!=NULL && root->right==NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }

        if(root->right!=NULL && root->left==NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }
        // 3. Node with 2 children

        Node*replace = root->right;
        while(replace->left!=NULL){
            replace = replace->left;
        }
        root->data = replace->data;
        root->right = deletionOfNode(root->right,replace->data);
        return root;
    }
    else {
        root->right = deletionOfNode(root->right,data);
        return root;
    }


}

bool isBST(Node *root, int minV = INT_MIN, int maxV= INT_MAX){
    if(root==NULL){
        return true;
    }
    if(root->data >= minV && root->data<=maxV && isBST(root->left, minV, root->data) && isBST(root->right,root->data, maxV)){
        return true;
    } else {
        return false;
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
