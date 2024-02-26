#include<iostream>
using namespace std ;

class A{
     public:
     void greet(){
          cout<<"Hello"<<endl;
     }
};
class B{
     public:
     void greet(){
          cout<<"Namaste"<<endl;
     }
};

class Derived : public A , public B{
     public:
     void greet(){
          B :: greet(); // Ambiguity resolution in inheritance using scope resolution operator ..
     }
     // if we do not use this ambiguity resolution operator then error will be flagged  because of ambiguity ...
};


int main()
{
    A obj1;
     obj1.greet();
     B obj2;
     obj2.greet();
    Derived D1;
    D1.greet(); 

     return 0;
}