#include<iostream>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	string x="";
	for(int i=0; i<n; i++){
		string o;
		cin>>o;
		x+=o;
	}
	
	string r(x);
	reverse(r.begin(),r.end());

	if(x==r){
		cout<<"true";
	}else cout<<"false";

	return 0;
}
