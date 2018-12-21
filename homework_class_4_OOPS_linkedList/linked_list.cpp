#include<iostream>
#include<vector>
using namespace std;

class node{
public:
    int data;
    node* next;
    node(int d){
        data = d;
        next = NULL;
    }
};

void insertAtHead( node* &head, int data){
    if(head==NULL){
        head = new node(data);
        return;
    }
    node*n = new node(data);
    n->next = head;
    head = n;
}

void insertInMiddle(node* &head, int data, int p){
    if(p==0) {
        insertAtHead(head, data);
    } else {
        node *temp = head;
        for(int i=0; i<=p-1;i++){
            temp = temp -> next;
        }
        node *n = new node(data); // but we allocate memory and hence it stays her
        n->next = temp->next; // should be dead after the scope of the fuction gets over
        temp->next = n;
    }

}

void deleteAtHead(node* &head);

void deleteInTheMiddle(node* &head , int p){
    if(p==0){
        deleteAtHead(head);
    }
    node *temp = head;
    for(int i=0; i<=p-2; i++){
        temp = temp -> next;
    }
    node* add = temp->next->next;
    delete temp->next;
    temp->next = add;

    
}

void printLinkedList(node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<endl;
}

void deleteAtHead(node* &head){
    if(head!=NULL){
        head = head->next;
    } else {
        cout<<"The Linked List is empty";
    }
}


int main(int argc, char const *argv[])
{
    node* head = NULL;
    insertAtHead(head,4);
    insertAtHead(head,5);
    insertAtHead(head,6);
    insertAtHead(head,7);
    insertInMiddle(head,1,2);
    printLinkedList(head);

    deleteInTheMiddle(head,2);
    printLinkedList(head);

    return 0;
}
