#include<iostream>
#include<vector>
using namespace std;

// void stack( vector<int> a,int top,int data){
//         a.push_back(data);
//         top+=1;
// }

// void top(vector<int> a){
//     cout<<a.size();
// }


// Implement using array by doubling the size

class Stack {
private:
    vector<int> v;
public:
    bool isEmpty(){
        return v.size() == 0;
    }

    void push(int x){
        v.push_back(x);
        return;
    }
    void pop(){
        if(isEmpty()){
            cout<<"Stack is Empty"<<endl;
            return;
        }
        v.pop_back();
    }

    int top() {
        return v[v.size()-1];
    }
};

int main(int argc, char const *argv[])
{

    return 0;
}
