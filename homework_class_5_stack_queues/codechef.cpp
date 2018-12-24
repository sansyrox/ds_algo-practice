#include<iostream>
#include<string>
#include<stack>
using namespace std;

void returnDepthAndPos(string s) {
	stack<char> a;
	int depth=1;
	int pos=1;
	cout<<s;
	int greatestDepth = 1;
	int greatesPos = 1;
	a.push('(');

	// cout<<s[0]<<" "<<s[1];
	for(int i=1; i<s.length(); i++){ // index + 1 in ques and // i at is '('
		if(s[i-1]!='(' and s[i]=='('){
			pos++; 
			depth++;

			// greates pos ka depth and pos
			a.push('(');
		}
		if(s[i-1]=='(' and s[i]=='('){
			depth++;
			pos++;
		}
	
		if(s[i]==')' and !(a.empty())){
			a.pop();
			pos++;
			depth = 0;

			
		}
	// }
		if( ((depth)>(greatestDepth)) && ((pos)>(greatestDepth))){
			greatesPos = pos;
			greatestDepth = depth;
			while(!(a.empty())){
				a.pop();
				greatesPos--;
			}
		}

		cout<<endl<<"pos "<<greatesPos<<" depth "<<greatestDepth<<endl;
	
	}

	string x = to_string(greatestDepth) + "," + to_string(greatesPos);
	cout<<x;
	// return x;

}

int main(int argc, char const *argv[])
{
	// int n;
	// string s="";
	// cin>>n;
	// for(int i=0; i<n; i++){
	// 	int t;
	// 	cin>>t;
	// 	if(t==1){
	// 		s+='(';
	// 	} else s+=')';
	// }
	// cout<<s<<endl;

	returnDepthAndPos("(()())");
	// cout<<y<<endl;

	return 0;
}
