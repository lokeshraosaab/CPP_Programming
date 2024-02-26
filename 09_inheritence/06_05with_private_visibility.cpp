#include<iostream>
using namespace std ;

class Base{
    int data1; // By default data1 is private ....and it is not inheritable... 
    public :
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void Base :: setData(){
    data1 = 10;
    data2 = 20;
}
int Base :: getData1(){
    return data1;
}
int Base :: getData2(){
    return data2;
}

// private visibility mode : all the public members of base class will become the private members of the derived class ..

class Derived : private Base{   // Derived class is derived from base class Base under private visibility mode ...
    int data3;  // By default data3 is private ...
    public:
    void process();
    void display();
};

void Derived :: process(){
    setData();  // This is call to private member of Derived class ..
    data3 = data2*getData1();
}
void Derived :: display(){
    cout<<"The value of data1 is = "<<getData1()<<endl;
    cout<<"The value of data2 is = "<<data2<<endl;
    cout<<"The value of data3 is = "<<data3<<endl;
}

int main()
{
    Derived D1;
   // D1.setData(); in this private visibility mode this will throw error ...bcz setData is now private 
   // function of Derived class ....so we cannot call it directly by object ...
    D1.process();
    D1.display();
     return 0;
}