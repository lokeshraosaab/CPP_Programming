#include<iostream>
using namespace std ;

class complex{
    int a=4;
    int b=3;
    public:
    void setDataBySum(complex o1, complex o2){
        a = o1.a + o2.a ;
        b = o1.b + o2.b ;
    }
    void getData(){
        cout<<"Your complex Number is "<<a<<"+"<<b<<"i"<<endl;
    }
}c1, c2, c3 ;

int main()
{
    c3.setDataBySum(c1,c2);
    c3.getData();
     return 0;
}