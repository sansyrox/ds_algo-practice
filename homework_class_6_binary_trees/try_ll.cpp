#include<iostream>

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


void insertAtHead(node*&head,int data){

	if(head==NULL){
		head = new node(data);
		return;
	}
	node*n = new node(data);
	n->next = head;
	head = n;
}

node* reverse(node*&head, int k){
	node*p = NULL;
	node*c = head;
	int count=0;
	node*n=NULL;


	while(c!=NULL && count<k){
		//save the next node
		n = c->next;
		//udpate the current node
		c->next = p;
		//move c and p one step ahead
		p = c;
		c = n;
		count++;
	}
	
	 if (n !=  NULL) 
       head->next = reverse(n, k);  
	
	return p;
    
	
}


void print(node*head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}


node* LLreverse(node*&head){
    node*p = NULL;
	node*c = head;
	node*n;

	while(c!=NULL){
		//save the next node
		n = c->next;
		//udpate the current node
		c->next = p;
		//move c and p one step ahead
		p = c;
		c = n;
	}
	head = p;
    return head;
}




int main(){
  node*head = NULL;
int n;
cin>>n;

int k;
cin>>k;
int c=1;

 while(c<=n)
  {  int i;
     cin>>i;
    insertAtHead(head,i);
    c++;
  }
    head = LLreverse(head);

    head=reverse(head,k);
    print(head);
    
	

	return 0;
}