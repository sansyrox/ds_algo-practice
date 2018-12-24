#include<iostream>
using namespace std;

class Queue {
private:
	int *arr;
	int curr_size;
	int max_size;
	int rear;
	int front;
public:
	Queue(int max_size=4){
		this->rear = 0;
		this->front = max_size-1;
		this->curr_size = 0;
		this->max_size = max_size;
		arr = new int[max_size];
	}

	bool isFull(){
		if(curr_size== max_size) return true;
		else return false;
	}

	void enQueue(int data){
		if(!isFull()){
			arr[rear] = data;
			rear = (rear+1)%max_size ;
			curr_size++;
		}
	}

	bool isEmpty(){
		if(curr_size==0){
			return true;
		} else  return false;
	}

	void deQueue(){
		front = (front + 1)%max_size;
		(this->curr_size)--;
	}

	void printQueue(){
		int temp = front;
		int flag=0;
		cout<<front;
		cout<<arr[temp]<<endl;
		while(flag<max_size-1){
			cout<<arr[flag]<<"->";
			// temp = (temp + 1)%max_size;
			// curr_size++;
			flag++;
		}
	}
};

int main(int argc, char const *argv[])
{
	Queue a;

	a.enQueue(1);
	a.enQueue(2);
	a.enQueue(3);
	// a.enQueue(4);

	a.printQueue();

	return 0;
}
