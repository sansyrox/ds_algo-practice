#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node*next;
    Node(int d){
        data = d;
        next = NULL;
    }
};

class LL{
    Node* head;
public:

    LL(){
        head = NULL;
    }

    void buildLL(int d){
        if(head==NULL){
            head = new Node(d);
            return;
        }
        else{
            Node*temp;
            temp = new Node(d);
            temp->next = head;
            head = temp;
        }
    }

    Node* HEAD(){
        return head;
    }

    // void reverseWithK(int k,Node*c , Node*p, Node*n){
    //     if(head==NULL){
    //         return;
    //     }
    //     int t =k;
    //     while(t>=1 and ){
    //         n = c->next;
    //         //udpate the current node
    //         c->next = p;
    //         //move c and p one step ahead
    //         p = c;
    //         c = n;
    //         t--;
    //     }
    //     p = head;

    //     reverseWithK(k,c,p,n);

    // }

    void reverse(int k){
	Node*p = NULL;
	Node*c = head;
	Node*n;

	while(c!=NULL and k>=1){
		//save the next node
		n = c->next;
		//udpate the current node
		c->next = p;
		//move c and p one step ahead
		p = c;
		c = n;
	}
	head = p;
    }

    void reverse(){
	Node*p = NULL;
	Node*c = head;
	Node*n;

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
    }

    void reverserWithK(int k, int i=0){
        
        if(head==NULL){
            return;
        }
        Node*temp;
        // temp = head;
        for(int x=0; x<i;x++){
            reverse(k);
        }
        i= i+k;
        reverserWithK(k,i);
        return;
    }

    void printLL(){
        Node*temp;
        temp = head;
        while(temp!=NULL) {
        cout<<temp->data<<" ";
        temp= temp->next;
        }
        // printLL(head);

    }

};

int main(int argc, char const *argv[])
{
    LL a;
    int n,k;
    cin>>n>>k;

    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        a.buildLL(temp);
    }
    // Node *head = a.HEAD();
    a.reverse();
    a.reverserWithK(k);
    a.printLL();
    return 0;
}
