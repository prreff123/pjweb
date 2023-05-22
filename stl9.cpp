// set in STL
#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s = {10,20,5,10,4};
    cout<<s.size()<<endl;
    s.insert(100);
    s.insert(25);
    cout<<s.size()<<endl;

    for(auto& el:s){
        cout<<el<<" ";
    }
    cout<<endl;

    int num_erase = s.erase(10);
    cout<<""<<num_erase<<endl;

    for(auto& el:s){
        cout<<el<<" ";
    }
    cout<<endl;

    auto ub = s.upper_bound(10);
    auto lb = s.lower_bound(10);
    cout<<*ub<<endl;
    cout<<*lb<<endl;

    return 0;
}