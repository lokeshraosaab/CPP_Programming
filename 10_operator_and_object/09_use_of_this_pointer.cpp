#include <iostream>
using namespace std;

class A
{
    int a;

public:
    A &setData(int a)
    { // A & ---> denotes reference of the object of the class A ...
        this->a = a;
        return *this; // returns object of the class which is invoke setData(int a) member function ...
    }
    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};

int main()
{
    A obj;
    //obj.setData(5);
    //obj.getData(); //These two statement is exactly equivalent to below one if a member function returns object obj of the class A...
    obj.setData(5).getData(); // it is good because here setData(5) returns object obj  .....
    return 0;
}