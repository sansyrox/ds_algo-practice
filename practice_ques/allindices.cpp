#include<iostream>
#include<string>
#include<vector>
using namespace std;

void allIndices(vector<int> a, int m,int i=0){
	if(i==a.size()){
		return;
	}
	if(a[i]==m){
		cout<<i<<" ";
		i++;
	}else {
		i++;
	}

	allIndices(a,m,i);

	

}

int main(int argc, char const *argv[]) {
	
	vector<int> a;
	a.reserve(100);
	int n,m;
	cin>>n;

	for(int i=0; i<n; i++){
		int temp;
		cin>>temp;
		a.push_back(temp);
	}
	cin>>m;

	allIndices(a,m);
	
	return 0;
}
