#include<iostream>
using namespace std ;

class Employee{
    int id;
    int salary;
    public:
    void setData();
    void getData();
};

void Employee::setData(){
    cout<<"Enter the id of the employee..."<<endl;
    cin>>id;
    cout<<"Enter the salary of the employee of id "<<id<<endl;
    cin>>salary;
}

void Employee::getData(){
    cout<<"The salary of the employee of id "<<id<<" is "<<salary<<endl;
}

int main()
{
    Employee fb[4];  // This is the array of the objects ....
    for(int i=0; i<4; i++){
        fb[i].setData();
        fb[i].getData();
    }
     return 0;
}