#include<iostream>
using namespace std ;
// if a base class contains a constructor with one or more arguements, then it is mandatory 
// for the derived class to have a contsructor .....
// But here we are not using special syntax for passing arguemants to the base class constructor ...

class employee{
    public:
    int id;
    float salary;
    employee(int inpid){
        id = inpid;
        salary = 500.4;
    }
    void getData(){
        cout<<"id : "<<id<<endl;
        cout<<"salary : "<<salary<<endl;
    }
    employee(){
        cout<<"Default constructor of base class called as the objects create"<<endl;
    }  //without this defualt constructor ...a error will throw by programmer constructor..
                  //ERROR--> no default constructor exist for class "employee" 
};

// If we do not want pass arguements from derived class constructor using special syntax then we have define one more 
// constructor(That should be default constructor (having no arguement)) in the base class . This will avoid error from 
// drived class constructor, because we are not using special syntax then there will be automatic call as objects of drived class created 
// to default constructor of base class ........

class programmer : public employee{
    public:
    int CountLanguage;
    programmer(int inpid){
        id = inpid;
        salary = 1000.5;
        CountLanguage = 9;
    }

};  

int main()
{
    employee e1(1), e2(2);

    cout<<"Details of Base class ...."<<endl;
    e1.getData();
    e2.getData();
    cout<<endl;

    programmer p1(3), p2(4);
    
    cout<<"Details of Derived class ...."<<endl;
    p1.getData();
    p2.getData();
    cout<<"CountLanguage : "<<p1.CountLanguage<<endl;
     return 0;
}