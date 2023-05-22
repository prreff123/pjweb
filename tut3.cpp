// STL(Standard template library)
// Pairs in STL
#include<iostream>
using namespace std;

int main(){
    // pair<int ,int> p = {1,3};
    // cout<<p.first<<" "<<p.second;
    pair<int,pair <int,int>> p = {1,{3,4}};
    cout<<p.first<<" "<<p.second.second<<" "<< p.second.first;
    // pair<int, int> arr[] = {{1,2},{3,4},{4,5}};
    // cout<<arr[0].first;

    return 0;
}

    