// stack in STL
#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    for(int i=0;i<5;i++){
        s.push(i);
    }
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;

    s.pop();
    s.pop();
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;

    if(s.empty()){
        cout<<"Stack is empty\n";
    }
    else{
        cout<<"not empty";
    }

    return 0;
}