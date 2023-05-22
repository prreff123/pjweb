// deque in STL
#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d = {1,2,3,4,5};
    cout<<d.size()<<endl;
    cout<<d[2]<<endl;
    // cout<<d.front()<<" "<<d.back();
    for(deque<int> :: iterator it = d.begin(); it!=d.end(); ++it){
        cout<<*it<<"\t";
    }
    cout<<endl;
    for(deque<int> :: reverse_iterator it = d.rbegin(); it!=d.rend(); ++it){
        cout<<*it<<"\t";
    }
    cout<<endl;
    d.push_back(100);
    d.push_front(-100);
    for(deque<int> :: iterator it = d.begin(); it!=d.end(); ++it){
        cout<<*it<<"\t";
    }
    cout<<endl;
    d.pop_back();
    d.pop_front();
    for(deque<int> :: reverse_iterator it = d.rbegin(); it!=d.rend(); ++it){
        cout<<*it<<"\t";
    }
    return 0;
}