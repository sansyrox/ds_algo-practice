#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printTriplets(vector<int> a, int target){
	sort(a.begin(), a.end());
	for(int i=0; i<a.size(); i++){
		int s = i+1;
		int e = a.size() - 1;
		int remSum = target - a[i];
		while(s<e){
			int sum = a[s] + a[e];
			if(sum == remSum){
				// print
				cout<<a[i]<<", "<<a[s]<<" and "<<a[e]<<"\n";
				s = s + 1;
			} else if(sum < remSum){
				s = s+1;
			} else {
				e = e - 1;
			}
		}
	}
	return;
}

int main(int argc, char const *argv[])
{
	vector<int> a;
	int n;
	cin>>n;
	
	while(n--){
		int temp;
		cin>>temp;
		a.push_back(temp);
	}
	int t;
	cin>>t;
	// for(auto i:a) {
	// 	cout<<i<<" ";
	// }

	printTriplets(a,t);

	return 0;
}
