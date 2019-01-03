#include<iostream>
using namespace std;

class Node{
public:
	int data;
	Node* next;
	Node(int d){
		this->data = d;
		this->next = NULL;
	}
};

Node* buildLL(Node *head, int data){
	if(head==NULL){
		head = new Node(data);
		return head;
	}

	Node*temp = new Node(data);
	temp->next = head;
	head = temp;
	return head;
}

void PrintLL(Node* head){
	Node *temp;
	// temp = head;
	while(head->next!=NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<head->data;
	cout<<endl;
}

Node* recReverse(Node *head){
	if(head->next==NULL){
		return head;
	}
	//Rec Case
	Node*chotaHead = recReverse(head->next);
	head->next->next = head;
	head->next = NULL;
	return chotaHead;
}

Node *merge(Node*h1, Node*h2){
	Node* h3=NULL;
	while (h1 and h2){
		if(h1->data < h2->data){
			h3 = buildLL(h3,h1->data);
			h1= h1->next;
		} else {
			h3 = buildLL(h3,h2->data);
			h2 = h2->next;
		}
	}

	while(h1){
		h3 = buildLL(h3,h1->data);
		h1 = h1->next;
	}

	while(h2){
		h3 = buildLL(h3, h2->data);
		h2= h2->next;
	}

	return h3;
}

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t){
		t--;
		int n1, n2;
		cin>>n1;
		Node *h1=NULL,*h2=NULL,*h3=NULL;
		if(n1>0){
			while(n1--){
				int temp;
				cin>>temp;
				h1 = buildLL(h1,temp);
			}
		}
		cin>>n2;
		if(n2>0){
			while(n2--){
				int temp;
				cin>>temp;
				h2 = buildLL(h2,temp);
			}
		}

		if(h1)
			h1 = recReverse(h1);
		if(h2)
			h2 = recReverse(h2);

		// PrintLL(h1);
		// cout<<endl;
		// PrintLL(h2);
		h3=NULL;
		h3 = merge(h1,h2);
		// cout<<endl;
		h3 = recReverse(h3);
		PrintLL(h3);
		// cout<<endl;

	}
	return 0;
}
