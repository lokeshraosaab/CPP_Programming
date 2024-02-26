// Now here we are solving the ambiguity occuring in the Hybrid Inheritance of the previous program....
// with the use of Virtual Base Classes .......

// let see Virtual Base class ...!!!...
// virtual base classes are used in virtual inheritance in a way of preventing 
// multiple "instances" of a given class appearing in an inheritance hierachy when using multiple inheritance ...
// we can declare the virtual base classes by placing the keyword "virtual" before or after the public ...

// class B and class C are drived from class A.....
// and class D is drived from class B and class C .....

#include<iostream>
using namespace std ;

class A{
    protected:
    int a = 4;
    public:
    void getData(){
        cout<<"a = "<<a<<endl;
    }
};

// By making class A as virtual Base class .....
// ambiguity occuring in the Hybrid Inheritance have solved .....

class B : virtual public A{

};
class C : virtual public A{

};

class D : public B , public C{

};

int main()
{
    D d1;
    d1.getData();
     return 0;
}