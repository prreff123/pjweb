#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5,6,7};
    auto it = v.begin() + 4;
    cout<<*it<<endl;
    cout<< it-v.begin()<<endl;

    it = v.insert(it,100);
    cout<<*it<<endl;
    // cout<<v[4]<<endl;
    return 0;
}