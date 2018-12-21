#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
    // 
    vector<int> v;
    v.reserve(100);
    for(int i=0 ; i<=5; i++){
        v.push_back(i*i);
    }
    // 
    for(int x:v) {
        cout<<x<<endl;
    }

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v.max_size()<<endl;
    return 0;
}
