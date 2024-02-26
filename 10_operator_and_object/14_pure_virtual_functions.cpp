#include<iostream>
using namespace std ;

class Base{
    public:
    int var_base = 5;
    virtual void display() = 0; //This is pure virtual function it must be re-define (override) in the drived class 
};
class Derived :public Base{
    public:
    int var_derived = 10;
    void display(){
        cout<<"1. Displaying Base class var_base : "<<var_base<<endl;
        cout<<"2. Displaying Derived class var_derived : "<<var_derived<<endl;
    }
};
int main()
{
    Base* base_class_pointer ; // we can have pointers and references of abstract class type ....
    //Base obj_base_class; //it will throw error as we can not create objects of abstract class ...
    Derived obj_derived_class ;
    base_class_pointer = &obj_derived_class ;
    base_class_pointer -> display();
     return 0;
}

