#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int min_function(vector<int> a){
	int min_index = 0;
	// int min = a[min_index];
	int index =0;
	int smallest = a[0] ;
    for ( int i=1;  i < a.size();  ++i ) {
        if ( a[i] < smallest ) {
				smallest = a[i] ;
				index = i;
			}
	}
	return index;
}

int min_steps(int min, vector<int> a){
	int sum =0;
	while(min>0){
		swap(a[min-1], a[min]);
		min--;
		sum++;
	}
	return sum;

}

int max_function(vector<int> a){
	int max = 0;
	for(int i=0; i<a.size(); i++){
		if(a[i]>a[max]){
			max = i;
		}
	}
	return max;
}

int max_steps(int max, vector<int> a){
	int temp = a.size() - 1;
	int sum = temp - max;
	return sum;

}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	vector<int> a;
	for(int i=0; i<n; i++){
		int temp;
		cin>>temp;
		a.push_back(temp);
	}
	int steps = 0;
	int x = min_function(a);
	// cout<<"minimum is "<< x << "" <<a[x]<<" ";
	steps += min_steps(x,a);
	// cout<<endl<<steps<<" ";
	int max = max_function(a);
	// cout<<a[max] << " ";
	steps+= max_steps(max,a);
	// cout<<endl<<steps;

	cout<<steps<<endl;

	
	return 0;
}
