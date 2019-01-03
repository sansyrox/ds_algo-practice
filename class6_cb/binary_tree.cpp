#include<iostream>
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
    int d; // data
    cin>>d;


    if(d==-1){
        return NULL;
    }

    node* root;
    root = new node(d);

    root->left = buildTree();
    root -> right = buildTree();
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

}

void printInorder(node*root){
    if(root==NULL){
        return ;
    }
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);

}

void printPost(node*root){
    if(root==NULL){
        return;
    }

    printPost(root->left);
    printPost(root->right);
    cout<<root->data<<" ";
}

int returnSum(node *root){
    if(root==NULL){
        return 0;
    }

    return root->data + returnSum(root->left)+ returnSum(root->right);
}

int returnHeight(node *root){
    if(root==NULL){
        return 0;
    }
    int ls = returnHeight(root->left);
    int rs = returnHeight(root->right);
    return max(ls,rs) + 1;
}

int returnNumberofNodes(node *root){
    if(root==NULL){
        return 0;
    }

    return 1 + returnNumberofNodes(root->left) + returnNumberofNodes(root->right);
}

void printKthlevel(node* root, int k){
    if(root==NULL){
        return;
    }
    if(k==1){
        cout<<root->data<<" ";
        return;
    }
    printKthlevel(root->left, k-1);
    printKthlevel(root->right, k-1);
    return;
}

void printAllLevels(node *root){
    int H = returnHeight(root);

    for(int i=1; i<=H; i++){
        printKthlevel(root,i);
        cout<<endl;
    }

    return;
}

void bfs(node *root){
    // the queue should be a node data type or the address
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* f = q.front();
        if(f==NULL){
            cout<<endl;
            q.pop();
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
        cout<<f->data<<" , ";
        q.pop();

        if(f->left){
            q.push(f->left);
        }

        if(f->right){
            q.push(f->right);
        }
    }
    }

}

int diameter(node*root){
    if(root==NULL){
        return 0;
    }

    int h1 = returnHeight(root->left);
    int h2 = returnHeight(root->right); // Root
    int op1 = h1 + h2; // 
    int op2 = diameter(root->left);
    int op3 = diameter(root->right);

    return max(op1,op3, op2);
}

int main(int argc, char const *argv[])
{
    node* root= buildTree();
    // print(root);
    // cout<<endl;

    // printInorder(root);
    // cout<<endl;
    // printPost(root);


    // cout<<endl<<returnHeight(root)<<endl;

    // printKthlevel(root,3);

    // printAllLevels(root);

    // bfs(root);

    cout<<diameter(root);
    return 0;
}
