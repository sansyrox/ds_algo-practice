#include<bits/stdc++.h>
using namespace std;

vector<int> g;

void printArray(vector<int> a, int k){
	if(k==0){
		return ;
	}

	for(int i=0; i<a.size(); i++) {
		if(a[i] < k){
			printArray(a,k-a[i]);
			g.push_back()
			}
		else if(a[i]==k){
			
		}
	}
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	vector<int> a;
	while(n--){
		int temp;
		cin>>temp;
		a.push_back(temp);
	}
	int k;
	cin>>k;

	return 0;
}
