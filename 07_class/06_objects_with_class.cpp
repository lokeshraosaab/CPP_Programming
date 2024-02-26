#include<iostream>
using namespace std ;
    class employee{
        int id;
        int salary;
        static int counter;
        public:
        void setData();
        void getData();
    }ramesh,mukesh,harish; // this is declaration of objects with classes or we can say just after the class...

    int employee::counter;

    void employee::setData(){
        cout<<"Enter the id of the employee "<<counter+1<<endl;
        cin>>id;
        cout<<"Enter the salary of the employee "<<counter+1<<" with id"<<id<<"...."<<endl;
        cin>>salary;
        counter++;
    }

    void employee::getData(){
        cout<<"The salary of the employee "<<counter<<" with id "<<id<<" is "<<salary<<endl;
    }
int main()
{
    cout<<"Details of ramesh...."<<endl;
    ramesh.setData();
    ramesh.getData();
    cout<<endl;
    
    cout<<"Details of mukesh...."<<endl;
    mukesh.setData();
    mukesh.getData();
    cout<<endl;

    cout<<"Details of harish...."<<endl;
    harish.setData();
    harish.getData();
    cout<<endl;

     return 0;
}