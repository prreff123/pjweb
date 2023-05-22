// vectors functions
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {1,2,3};
    cout<<v.size()<<endl;
    cout<<v.max_size()<<endl;
    v.push_back(4);
    // cout<<v.size()<<endl;
    // cout<<v.capacity()<<endl;

    int cap = v.capacity();
    for(int i=0;i<100;i++){
        v.push_back(i);
        if(cap!=v.capacity()){
            cap = v.capacity();
            cout<<cap<<endl;
        }
    }

    cout<<v.front()<<" , "<<v.back()<<endl;

    return 0;
}