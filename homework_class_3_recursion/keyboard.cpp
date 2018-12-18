#include<iostream>
#include<map>
#include<string>
#include<vector>
using namespace std;

void outputPrint(map<char,string> keyboard, string n, int j, string s){ // i - cursor for map, j-cursor for number
    // Base Case
    if(j>=n.length()){
        for(int x=0; x<n.length();x++) cout<<s[x];
        cout<<endl;
        return;
    }
    // string s=""; // storage // digit
    int digit = n[j] - '0';
    // cout<<digit<<" "<<j<<" ";

    // // Rec Case
    for(int i=0; i<keyboard[digit].length(); i++){
    s[j] = keyboard[digit][i];
    // cout<<"s["<<j<<"]=="<<keyboard[digit][i]<<endl;
    outputPrint(keyboard,n,j+1,s);

    }

    
}

int main(int argc, char const *argv[])
{
    map<char,string> keyboard;
    keyboard[1] = ""; 
    keyboard[2] = "ABC"; 
    keyboard[3] = "DEF"; 
    keyboard[4] = "GHI"; 
    keyboard[5] = "JKL"; 
    keyboard[6] = "MNO"; 
    keyboard[7] = "PQRS"; 
    keyboard[8] = "TUV"; 
    keyboard[9] = "WXYZ"; 
    string s;
    outputPrint(keyboard,"2345",0,s);
    return 0;
}
