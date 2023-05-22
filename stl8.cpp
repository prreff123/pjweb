// priority queue in STL
#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main(){
    priority_queue<int> Q;
    vector<int> v = {8,1,6,4,5,21,14};
    for(int x:v)Q.push(x);
    while (!Q.empty()){
        cout<<Q.top()<<" ";
        Q.pop();

    }
    cout<<endl; 

    return 0;
}