#include<iostream>
using namespace std;

class Vector{
	int *arr; // pointer to array
	int capacity;
	int ds;
	int cs; //current size

public:
	Vector(int ds=4){
		capacity = ds;
		arr = new int[capacity];
		cs = 0; 
	}

	void push_back(int data){
		if(data==capacity){
			int *oldArr = arr;
			arr = new int [capacity<<1];

			for(int i=0; i<capacity; i++){
				arr[i] = oldArr[i];
			}
		}
		arr[cs] = data;
		cs++;
	}

	void pop_back(){
		if(cs>0){
			cs--;
		}
	}

	void set_capacity(int c){ // setter
		capacity = c;
	}
	
	int get_capacity(){ // getter
		return capacity;
	}
	int size() const{ // read only mode and not modifying any memebr of any array 
        return cs;
    }
	void operator+(int n){
		for(int i=0; i<cs; i++){
			arr[i]= arr[i] + n;
		}
	}

	int& at(int i){ //a.at(i)++ karenge to original vaali main bhi change hona chahiye
		return arr[i];

	}

	int& operator[](int i){
		return arr[i];
	}

	~Vector(){
		if(arr!=NULL){
			delete [] arr;
			arr = NULL;
		}
	}

};

int main(int argc, char const *argv[])
{
	Vector V(4);
	V.push_back(0);
	V.push_back(1);
	cout<<V.at(0);
	cout<<V.at(1)<<endl;
	V+4;
	cout<<V.at(0);
	cout<<V.at(1)<<endl;
	cout<<V[0];
	return 0;
}
