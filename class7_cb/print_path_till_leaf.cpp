#include<iostream>
#include<string>
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


bool printPath(node*root, int data, string s){
    if(root->data==data and root->left==NULL and root->right==NULL){
        cout<<s;
        return true;
    }

    bool leftPeleafNode = printPath(root->left, data, s);

    
}

int main(int argc, char const *argv[])
{

    return 0;
}
