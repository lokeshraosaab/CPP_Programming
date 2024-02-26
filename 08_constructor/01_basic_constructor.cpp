#include<iostream>
using namespace std ;

class complex{
    int a, b;
    public:
    void printNumber(){
        cout<<"Your complex number is "<<a<<"+"<<b<<"i"<<endl;
    }

    complex(); // constructor declaration...
};

complex :: complex(){   // This is default constructor ......
    a = 10;
    b = 15;
    cout<<"Hello world"<<endl;
}

int main()
{
    complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
     return 0;
}