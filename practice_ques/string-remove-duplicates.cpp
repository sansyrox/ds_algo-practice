#include<iostream>
#include<string>
using namespace std;

string removeDuplicates(string s,int i=0, string copy=""){
	// Base Case
	if(i==s.length()){
		return copy;
	}

	// Rec Case
	if(s[i]==copy[copy.length()-1]){
		i++;
		return removeDuplicates(s,i,copy);
	} else{
		copy+=s[i];
		i++;
		return removeDuplicates(s,i,copy);
	}

}

int main(int argc, char const *argv[])
{
	string s;
	cin>>s;

	cout<<removeDuplicates(s);
	return 0;
}
