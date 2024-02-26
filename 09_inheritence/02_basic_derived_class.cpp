#include <iostream>
using namespace std;

// all the properties (data) and characteristics (functions) under public and protected access of base class
// can use by derived class on the basis of visibility mode .....

// we can further add some properties (data) and characteristics (functions) in the derived class ...

// Here we are not using any constructor ...

// Base class ....

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
        cout << "id : " << id << endl;
        cout << "salary : " << salary << endl;
    }
};

// Derived class....

class programmer : public employee
{
public:
    int Countlanguage;
    float SGPA;
void setinfo(int cl, float sg)
    {
        Countlanguage = cl;
        SGPA = sg;
    }
void getinfo()
    {
        cout << "Countlanguage : " << Countlanguage << endl;
        cout << "SGPA : " << SGPA << endl;
    }
};

int main()
{
    employee e1, e2;
    cout << "Details of employee..." << endl;
    e1.setData(1, 20000);
    e1.getData();
    cout << endl;
    e2.setData(2, 30000);
    e2.getData();
    cout << endl;

    // By the outputs of below instructions ...we can easily understands how we are using the data and functions
    // of base class by the derived class using visibility mode ....

    programmer p1, p2;
    cout << "Details of programmer...." << endl;
    p1.setData(3, 45000);
    p1.setinfo(8, 9.8);
    p1.getData();
    p1.getinfo();
    cout << endl;

    p2.setData(4, 60000);
    p2.setinfo(9, 8.0);
    p2.getData();
    p2.getinfo();

    return 0;
}