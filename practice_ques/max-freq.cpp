#include<iostream>
#include<string>
using namespace std;

int maxFrequency(int arr[], string s) {
	for(int i=0; i<s.length(); i++){
		int x = int(s[i]);
		arr[x] += 1;
	}

	int max_frequency =0;
	int index = 0;
	for(int j=0 ; j<256; j++){
		if(arr[j]>max_frequency){
			max_frequency = arr[j];
			index = j;
		}
	}
	// cout<<max_frequency;

	return index;
}

int main() {
  	int arr[256] = {0};
	string s;
	cin>>s;

	cout<<char(maxFrequency(arr,s));

	return 0;
}