#include<string>
#include<iostream>
using namespace std;

string duplicateRec(string s, int len, int i, string copy){
	// Base Case
	if(i==len){
		return copy;
	}

	// Rec Case
	if(s[i]==copy[copy.length()-1]){
		copy+="*";
		copy+=s[i];
		i++;
		return duplicateRec(s,len, i,copy);
	} else {
		copy+=s[i];
		i++;
		return duplicateRec(s,len, i,copy);
	}

}

int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	string copy="";
	cout<<duplicateRec(s,s.length(),0,copy);
	return 0;
}
