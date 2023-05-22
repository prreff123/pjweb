// queue in STL
#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> Q;
    for(int i=1; i<=5;i++){
        Q.push(i);
    }
    cout<<Q.front()<<" "<<Q.back()<<endl;
    cout<<Q.size();

    Q.pop();
    cout<<endl;
    cout<<Q.front()<<" "<<Q.back()<<endl;
    cout<<Q.size();

    return 0;
}