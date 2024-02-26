#include<iostream>
using namespace std ;

class Base1{
    protected:
    int Base1int;
    public:
    void set_Base1int(int n){
        Base1int = n;
    }
};

class Base2{
    protected:
    int Base2int;
    public:
    void set_Base2int(int n){
        Base2int = n;
    }
};

// here we are driving a drived class from above two classes Base1 and Base2 .....
// understand the syntax ...
// class {{Derived class name}} : {{visibility mode}} {{Base class 1}} , {{visibility mode}} {{Base class 2}} {};


class Derived : public Base1 , public Base2{
    public:
    void show(){
        cout<<"The value of Base1int is : "<<Base1int<<endl;
        cout<<"The value of Base2int is : "<<Base2int<<endl;
        cout<<"The value of sum of Base1int and Base2int is : "<<(Base1int + Base2int)<<endl;
    }
};

/*
The inherited derived class looks like ....
Data Members ....
    Base1int --->protected
    Base2int --->protected
Member Functions ...
    set_Base1int(int n) --> public
    set_Base2int(int n) --> public
*/

int main()
{
    Derived D1;
    D1.set_Base1int(2);
    D1.set_Base2int(3);
    D1.show();
     return 0;
}