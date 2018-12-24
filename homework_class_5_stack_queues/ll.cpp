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

// class LinkedList{
// 	node*head;
// 	node*tail;
// public:
// 	void add(___);
// }

void insertAtHead(node*&head,int data){

	if(head==NULL){
		head = new node(data);
		return;
	}
	node*n = new node(data);
	n->next = head;
	head = n;
}



void print(node*head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}

// void deleteInTheMiddle(node*&head,int data){}

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


int main(){
	node*head = NULL;
	int n;
	cout<<"Enter the maximum number of nodes in the LL: ";
	cin>>n;

	cout<<"Input K: ";
	int k;
	cin>>k;
	int c=1; // current index and enter the first term, where the index of Linked list is starting from 1
	int i;
	while(c<=n) {  
		
		cin>>i;
		insertAtHead(head,i);
		c++;
	}

	head=reverse(head,k);
	print(head);
	
	

	return 0;
} 