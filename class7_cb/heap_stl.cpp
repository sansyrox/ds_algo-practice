#include<iostream>
#include<queue>

using namespace std;

class Compare{
    public:
    bool operator()(int a, int b){
        return a<b;
    }
};

int main(int argc, char const *argv[])
{
    priority_queue<int> h_max; // max heap
    priority_queue<int,vector<int>, greater<int> >h_min; //min heap
    // priority_queue<Person,vector<Persone>, PersonCompare > h; // user defined // for Person calss

    int d;
    cin>>d;

    while(d!=-1){
        h_max.push(d);
        cin>>d;
    }


    // print()
    return 0;
}
