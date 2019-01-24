#include<iostream>
#include<queue>
#include<string>

#define cmp(a) ((a>='A' and a<='Z')? true: false)

using namespace std;

void printQ(queue<char>&q){
	if(q.empty()){
		return;
	}
	while(!q.empty()){
		cout<<q.front();
		q.pop();
	}
	cout<<endl;
}

void stringCamelCase(string s){
	queue<char> q;
	for(int i=0; i<=s.length(); i++){
		if(cmp(s[i])) {
			printQ(q);
			
		}
		if(i==s.length()){
			printQ(q);
		}
		q.push(s[i]);
	}
	// printQ(q);
}

int main(int argc, char const *argv[])
{
	queue<int> q;
	// printQ(q);
	string s;
	cin>>s;
	stringCamelCase(s);

	return 0;
}
