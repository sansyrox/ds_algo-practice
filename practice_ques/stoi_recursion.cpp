#include<string>
#include<iostream>
#include<cmath>
using namespace std;

int returnInteger(string s, int len, int i=0,int sum = 0){ // len = last index

	// Base Case
	if(len==-1){
		return sum;
	}

	sum += (s[len]-'0')*pow(10,i);
	cout<<sum<<endl;
	return returnInteger(s,len-1,i+1,sum);

}

int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	int l = s.length()-1;
	cout<<returnInteger(s,l);
	return 0;
}
