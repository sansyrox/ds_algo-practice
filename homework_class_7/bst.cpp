#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* insertInBST(Node* head, int data){
    if(head==NULL){
        head = new Node(data);
        return head;
    }

    else if(data<head->data){
        head->left = insertInBST(head->left,data);
    }
    else if(data>=head->data){
        head->right = insertInBST(head->right,data);
    }

    return head;
}

void buildBST(){
    Node* root = NULL;
    int data;
    cin>>data;
    while(data != -1){
        root = insertInBST(root,data);
        cin>>data;
    }
    cout<<root;
    // return root;

}

int main(int argc, char const *argv[])
{
    
    return 0;
}
