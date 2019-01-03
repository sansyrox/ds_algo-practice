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

node* merge(node*a,node*b){
	if(a==NULL){
		return b;
	}
	if(b==NULL){
		return a;
	}

	node*c;
	if(a->data < b->data){
		c = a;
		c->next = merge(a->next,b);
	}
	else{
		c=b;
		c->next = merge(a,b->next);
	}
	return c;

}

node* midPoint(node*head){

	node*slow = head;
	node*fast = head->next;

	while(fast!=NULL and fast->next!=NULL){
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
}

node* mergeSort(node*l){
	if(l==NULL or l->next==NULL){
		return l;
	}

	node*mid =  midPoint(l);
	node*a = l;
	node*b = mid->next;
	mid->next = NULL;

	a = mergeSort(a);
	b = mergeSort(b);

	return merge(a,b);


}

void print(node*head){
	while(head->next!=NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
    cout<<head->data<<endl;
	// cout<<endl;
}


int main() {
 int t;
 cin>>t;
  node*head1 = NULL;
  node*head2 = NULL;
  node*head= NULL;
	int n,m,c=1,d=1;
	cin>>n;
	while(c<=n)
	{  int i;
     cin>>i;
    insertAtHead(head1,i);
    c++;
  }
  
  cin>>m;
  while(d<=m)
  {  int j;
     cin>>j;
    insertAtHead(head2,j);
    d++;
  }
	
	 
	
	
	head = merge(head1,head2);
	head=mergeSort(head);
	print(head);

	return 0;
}