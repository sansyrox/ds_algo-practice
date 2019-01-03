#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string, int> mp;
    mp.insert(make_pair("coding",1));
    mp.insert(make_pair("blocks",2));
    mp.insert(make_pair("algo",3));
    mp.insert(make_pair("c++",4));

    mp.erase("algo");
    
    for(unordered_map<string, int>::iterator it=mp.begin(); it!=mp.end(); it++){
        cout<<(*it).first<<"->"<<(*it).second<<endl;
    }

    return 0;
}