#include <iostream>
using namespace std;

class SimpleCalculator
{
    int a, b;

public:
    void setdata(){
        cout<<"Enter the value fo a: "<<endl;
        cin>>a;
        cout<<"Enter the value of b: "<<endl;
        cin>>b;
    }
    void getdata(){
        cout<<"The value of a+b is "<<a+b<<endl;
        cout<<"The value of a-b is "<<a-b<<endl;
        cout<<"The value of a*b is "<<a*b<<endl;
        cout<<"The value of a/b is "<<a/b<<endl;
    }
};

int main(){
    SimpleCalculator Calc;
    Calc.setdata();
    Calc.getdata();
    return 0;
}