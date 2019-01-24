#include<bits/stdc++.h>
using namespace std;

// int calcVolume(vector< pair<int,int> > a){
//     int curr;
// }

int main(int argc, char const *argv[])
{
    /* code */
    int n;
    vector<int> a;
    vector<pair<int,int> > vect;
    cin>>n;
    while(n>0){
        // cout<<n;
        // cout<<"Here"<<endl;

        n--;
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    // cout<<"Here";

    
    int i=0;
    int curr_max = 0;
    while(i<a.size()-1){
        vect.push_back( make_pair(a[i],curr_max) );
        if(a[i]>curr_max){
            curr_max = a[i];
        }
        i++;
    }

    // cout<<"Idhar";

    for(auto j:vect){
        cout<<j.first<<" "<<j.second<<" "<<endl;
    }

    return 0;
}
