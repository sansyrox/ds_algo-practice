#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
    map<int, int> mp;
    mp.insert(make_pair(10,1));
    mp.insert(make_pair(15,2));
    mp.insert(make_pair(2,3));
    mp.insert(make_pair(-1,4));
    
    for(auto it=mp.begin(); it!=mp.end(); it++){
        cout<<(*it).first<<"->"<<(*it).second<<endl;
    }

    return 0;
}