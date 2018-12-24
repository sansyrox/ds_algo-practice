#include<bits/stdc++.h>

using namespace std;

int numberOfRedundantStrings(string s){

	stack<char> a;
	int count =0;
	for(int i=0; i<s.length(); i++){
		if(s[i]!=')'){
            a.push(s[i]);
        }else { // i == )
			if(a.top()!='('){
				while(a.top()=='('){
					// cout<<a.top();
					a.pop();
					
				}
				a.pop();
				cout<<endl;
			} else count++;
		}

	}

	return count;
}

int main(){

	string s = "(()()()())";
	cout<<numberOfRedundantStrings(s);

	return 0;
}   