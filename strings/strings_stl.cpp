#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

bool compare(string a, string b){
	return a.length()>b.length();
}

int main(int argc, char const *argv[])
{
	string s("Hello World");

	cout<<s<<endl;
	string s2 = "Another Way!";
	cout<<s2<<endl;
	cout<<s2.length();

	string s3;
	getline(cin,s3);

	cout<<s3<<endl;

	string arr[] = {"Apple", "Pineapple","Mango","Guava"};
	sort(arr,arr+4,compare);

	for(int i=0; i<4; i++){
		cout<<arr[i]<<",";
	}

	return 0;
}
