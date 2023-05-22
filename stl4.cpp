// List in STL
#include<iostream>
#include<list>
using namespace std;

void print_LIST(list<int>& ll){
    for(list<int>::iterator it = ll.begin(); it != ll.end(); ++it){
        cout<<*it<<"\t";
    }
    cout<<endl;
}

int main(){
    list<int> num = {1,2,3,4,5};
    print_LIST(num);
    cout<<num.size();
    list<int> num1 = num;
    print_LIST(num1);

    return 0;
}