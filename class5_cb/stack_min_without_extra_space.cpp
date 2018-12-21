#include<iostream>
#include<vector>
using namespace std;


class Stack {
private:
    vector<int> v;
    int min;
public:
    bool isEmpty(){
        return v.size() == 0;
    }

    void push(int x){
        if(isEmpty()){
            v.push_back(x);
            min = x;
            return;
            }
        if(min>x){
            v.push_back(2*x - min);
            min = x;
        }
        return;
    }
    void pop(){
        if(isEmpty()){
            cout<<"Stack is Empty"<<endl;
            return;
        }
        if(top()>=min)
            v.pop_back();
        else {
            min = 2*min - v[v.size()-1];
            v.pop_back();
            }

    }

    int top() {
        if(v[v.size()-1]>min)
            return v[v.size()-1];
        else 
            v[v.size()-1] = 2*min - v[v.size()-1];
            return v[v.size()-1];
    }
};

int main(int argc, char const *argv[])
{

    return 0;
}
