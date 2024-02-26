#include <iostream>
using namespace std;

class Base
{
public:
    void greet()
    {
        cout << "Namaste Guru Ji" << endl;
    }
};

class Derived : public Base
{
public:
    void greet()
    {
        cout << "Hello Sir" << endl;
    }
};

// Here Base and Derived class have members with the same name so here looks ambiguity....
// But it can be solved itself in the way that ....
// Derived obj;
// obj.greet ---> output ---> Hello sir ....
// if object of drived class call a member function ...and if this member function is defined in the Drived class
// then output will be according to this member function instead of member fuction of Base class having also a same name and no error will be flagged ....

int main()
{
    Base B1;
    B1.greet();
    Derived D1;
    D1.greet();
    return 0;
}