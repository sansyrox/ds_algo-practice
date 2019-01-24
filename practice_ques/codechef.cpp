#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{	
	int t;
	cin>>t;
	// cout<<t;
	while(t--){
		// cout<<"Taking input";
		string s;
		// cin>>s;
		cin.ignore();
		getline(cin,s);
		map<int,string> m;
		
		// cout<<s;1
		int index = 0;
		for(int i=0; i<s.length(); i++){
			if(s[i]!=' '){
				m[index]+=s[i];
			}
			else {
				index++;
			}
		}
		
		bool t = false;
		for(auto i:m){
			if(i.second=="not"){
				t=true;
				break;
			}
		}
		if(t==false){
			cout<<"regularly fancy\n";
		}else {
			cout<<"Real fancy\n";
		}

	}

	return 0;
}
