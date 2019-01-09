#include<iostream>
#include<string>
using namespace std;

void printWordsInCamelCase(string s){
	for(int i=0; i<s.length(); i++){
		string temp="";
		if(s[i]>='A' and s[i]<='Z'){
			temp+=s[i];
			i++;
			while(!(s[i]>='A' and s[i]<='Z')){
				temp+=s[i];
			}
		}

		cout<<temp<<endl;
	}
	return;

}

int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	printWordsInCamelCase(s);
	return 0;
}
