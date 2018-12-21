#include<iostream>
#include<string>
using namespace std;

// template <typename>T; all logical T's is replaced
class Vector{
    int *arr; // Pointer to array
    int cs;
    int ds;
    int capacity;

public:
    Vector(Vector &X){ // so that original parameters is not being changed use const Vector 
        cs = X.size();
        capacity = X.get_capacity();
        arr = new int[capacity];
        for(int i=0;i<cs;i++){
            arr[i]=X.arr[i];
        }
    }

    Vector(int ds=4){ // constructor to create a capacity
        capacity = ds;
        arr = new int[capacity]; // Dynamic Memory Allocation --> Heap , destroyed using delete , stack main automatic cleaning hoti hai
        cs = 0;
    }

    void push_back(int data){
        if(cs==capacity){
            // Expand the current array
            int *oldArr = arr;
            arr = new int[capacity<<1];

            for(int i=0; i<capacity; i++){
                arr[i]=oldArr[i];
            }

            // delete the old Array
            delete [] oldArr;
            capacity = capacity<<1;
        }
        arr[cs] = data;
        cs++;

    }

    void pop_back(){
        if(cs>0){
            cs --;
        }
    }

    void set_capacity(int c){ // setter
        if(c>0){
            capacity = c;
        }
    }
    int get_capacity(){ // read only // getter
        return capacity;
    }

    int size() const{ // read only mode and not modifying any memebr of any array 
        return cs;
    }

    int at(int i){
        return arr[i];
    }

    void operator!(){ //operator is keyword
        for(int i=0;i<cs;i++){
            arr[i] *= -1;
        }
    }

    void operator+(int no){
        for(int i=0; i<cs; i++){
            arr[i] += no;
        }
    }
    // only mathematical operators can be overloaded
    void operator()(string names){
        cout<<names <<" Having Fun";
    }

    int& operator[](int i){ // use int& operator to retur
        return arr[i];
    }

    ~Vector(){
        cout<<"Deleting vector"<<endl;
        if(arr!=NULL){
            delete [] arr;
            arr = NULL;
        }
    }
};

// Class ke bahar

ostream& operator<<(ostream &a, Vector &v){ // do not make any copies of object // left side and not on right side
    for(int i=0; i<v.size(); i++){ // return type ostream& because cout<<a<<b main fail kar jaega
        a<<v[i]<<" ,";
    }
    return a;
}

istream& operator>>(istream &b, Vector &v ){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    return b;
}

int main(int argc, char const *argv[])
{
    /* code */
    Vector v;
    cin>>v;
    // cout<<v<<endl<<v; // cascading

    // Vector v2(v);
    // Vector v2 = v; //copy constructor is same

    Vector v2;
    v2 = v; // Copy Assignment operator by default by also creates a shallow copy of a constructor

    cout<<v<<endl;


    v2[1]=100;
    cout<<v<<endl;
    cout<<v2<<endl;


    // v.reserve(100);
    // for(int i=0 ; i<=5; i++){
    //     v.push_back(i*i);
    // }

    // v[0] = 7; // working because of int&
    // cout<<v[0];


    // cout<<v;




    // // 
    // !v;
    // v+3;

    // v("Hello"); // functional object | Functor // cout having fun and not the constructor of the element;

    // for(int i=0; i<v.size(); i++){
    //     cout<<v.at(i)<<" "; // v[i]
    // }
    // cout<<endl;
    // cout<<v.size()<<endl;
    // cout<<v.get_capacity()<<endl;

    // Dynamic Vector
    Vector *vptr = new Vector;
    delete vptr;

    return 0;
}
