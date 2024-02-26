#include<iostream>
using namespace std ;

class Base{
    public:
    int var_base = 5;
    virtual void display(){
        cout<<"Displaying Base class var_base : "<<var_base<<endl;
    }
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
    Base* base_class_pointer ;
    Base obj_base_class;
    Derived* derived_class_pointer;
    Derived obj_derived_class; 
   
   // base_class_pointer = &obj_base_class ;
    base_class_pointer = &obj_derived_class ;
    base_class_pointer -> display();
     return 0;
}