// reverse of string
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char str[] = "Priyanshu Jain";
    int length = strlen(str);
    for(int i=length-1;i>=0;i--){
        cout<<str[i];
    }
    return 0;
}