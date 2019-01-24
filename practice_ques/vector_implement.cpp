#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> a;
	a.push_back(0);
	a.push_back(2);
	a.push_back(3);

	for(auto i:a){
		cout<<i<<" ";
	}
	cout<<endl;

	a.insert(a.begin(),3);

	for(auto i:a){
		cout<<i<<" ";
	}

	return 0;
}
