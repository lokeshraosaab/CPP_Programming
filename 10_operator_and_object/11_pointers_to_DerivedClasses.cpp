#include <iostream>
using namespace std;

class Base
{
public:
    int var_Base;
    void display()
    {
        cout << "Displaying Base class variable var_Base :" << var_Base << endl;
    }
};
class Derived : public Base
{
public:
    int var_Derived;
    void display()
    {
        //cout<<"Displaying Base class variable var_Base :"<<var_Base<<endl;
        Base ::display();
        cout << "Displaying Derived class variable var_Derived :" << var_Derived << endl;
    }
};

int main()
{
    Base *Base_class_pointer;     // pointer of Base class ...
    Base obj_Base_class;          // object of Base class ...
    Derived *Derived_class_pointer; // pointer of Derived class ...
    Derived obj_Derived_class;      // object of Derived class...

    Base_class_pointer = &obj_Derived_class; // Base class pointer can also point to the object of Derived class ...
    //Derived_class_pointer = &obj_Base_class ; // it will throw error because Derived class pointer can not point to the object of Base class
    cout << endl;
    Base_class_pointer->var_Base = 35;
    Base_class_pointer->display();
    // Base_class_pointer -> Derived_Base = 3500; // will throw an error ...bcz Derived_Base is property of Derived class ..
    Base_class_pointer->var_Base = 3500;
    Base_class_pointer->display();
    cout << endl;

    // Base class pointer can access properties and methods of only Base class .....
    // Base class pointer can points to Derived class object .....
    // but Base class pointer can not access properties and methods of Derived class ........
    // if we are trying to access properties and methods of Derived class from Base class pointer it will throw error ....

    Derived_class_pointer = &obj_Derived_class;
    Derived_class_pointer->var_Base = 3900; // Derived class pointer can access the properties and methods of both Base and Derived classes.
    Derived_class_pointer->var_Derived = 4000;
    cout << endl;
    Derived_class_pointer->display();

    // Derived class pointer can acess properties and methods of both Base and Derived classes ...
    // Derived class pointer can not points to the object of Base class ...
    // if we are trying to point object of Base class from Derived class pointer it will throw error ...
    return 0;
}