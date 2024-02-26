#include <iostream>
using namespace std;

// The capability of a class to derive properties and characteristics from another class
// is called inheritance .....

// Base Class ....
class employee
{
public:
    int id;
    float salary;
    void setData(int n1, float n2)
    {
        id = n1;
        salary = n2;
    }
    void getData()
    {
        cout << id << endl;
        cout << salary << endl;
    }
};

// Derived class....
class programmer : public employee
{
    
};

int main()
{
    employee e1, e2;
    e1.setData(1, 20000);
    e1.getData();
    e2.setData(2, 30000);
    e2.getData();

    // By the outputs of below instructions ...we can easily understands how we are using the data and functions
    // of base class by the derived class using visibility mode ....

    programmer p1, p2;
    p1.setData(3, 45000);
    p1.getData();
    p2.setData(4, 60000);
    p2.getData();
    return 0;
}
// Here we can easily seen if we are not using constructors in the base class then there is no need of using
// constructors in the derived class .....
// above mentioned program is the basic example to understand inheritance ....