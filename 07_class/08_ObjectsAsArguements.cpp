#include<iostream>
using namespace std ;

class complex{
    int a;
    int b;
    public:
    void setData(int v1, int v2){
        a = v1;
        b = v2;
    }
    void setDataBysum(complex o1, complex o2){
        a = o1.a + o2.a ;
        b = o1.b + o2.b ;
    }
    void getData(){
        cout<<"Your complex number is "<<a<<"+"<<b<<"i"<<endl;
    }
}c1, c2, c3;

int main()
{
    c1.setData(1,2);
    c1.getData();

    c2.setData(2,4);
    c2.getData();

    c3.setDataBysum(c1,c2); // objects as arguements.....
    c3.getData();


     return 0;
}