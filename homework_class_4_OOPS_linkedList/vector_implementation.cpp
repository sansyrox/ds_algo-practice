#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v;
    v.reserve(100); // Reserves 100 memory locations
    for(int i=0; i<5; i++){
        v.push_back(i*i);
    }
    for(auto i:v) cout<<i<<" ";
    cout<<"Hello"<< endl ;

    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v.max_size()<<endl;


    return 0;
}
