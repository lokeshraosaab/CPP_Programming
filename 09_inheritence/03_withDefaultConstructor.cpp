#include<iostream>
using namespace std ;
// As long as a base class constructor does not take any arguements (Means having mentioned only default constructor or not having any costructor ), 
// the derived class need not have a constructor function...

class employee{
    public:
    static int id;
    float salary;
    employee(){
        id++;
        salary = 500.4;
    }
    void getData(){
        cout<<"id : "<<id<<endl;
        cout<<"salary : "<<salary<<endl;
    }
};

int employee :: id;

class programmer : public employee{
    public:
    int CountLanguage = 8;
   };  

int main()
{

    cout<<"Details of Base class ...."<<endl;
    employee e1;
    e1.getData();
    employee e2;
    e2.getData();
    cout<<endl;

    
    cout<<"Details of Derived class ...."<<endl;
    programmer p1;
    p1.getData();
    programmer p2;
    p2.getData();
    cout<<"CountLanguage : "<<p1.CountLanguage<<endl;
     return 0;
}