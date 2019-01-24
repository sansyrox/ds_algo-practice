#include<iostream>
#include<cstring>
using namespace std;

char* myStrTok(char str[], char delim){
    static char* flag; 
    char *output;
    if(str != NULL){
        flag = str;
    }
    if(str==NULL){
        return NULL;
    }

    while(flag[0]!=delim){
        cout<<flag[0];
        flag++;
    }

    int i;
    for(i=0 ; str[i]!='\0';i++){
        if(str[i]!=delim){
            output[i] = str[i];
        } else{
            output[i] = '\0';
            flag = flag + i + 1;
            return output;
        }
    }

    // Returnong the last word even if the deliminiter is not there
    output[i]='\0';
    str= NULL;
    return output;


}

int main(int argc, char const *argv[])
{
    char str[] = "Hello, I am teaching about strings in C++";
    cout<<myStrTok(str,',');
    cout<<myStrTok(NULL,',');



    return 0;
}
