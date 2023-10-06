#include<iostream>
using namespace std ;

int main()
{   
    int a=3;
    int* b=&a;

    // & --> 'adress of' operator....  
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;
    cout<<endl;

    // * --> 'Value at adress' Or dereference operator....
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of a is "<<*(&a)<<endl;
    cout<<endl;

    // pointer to pointer ....
    int** c=&b;

    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<endl;
    
    cout<<"The value of c is "<<c<<endl;
    cout<<"The value of b is "<<b<<endl;
    cout<<"The value of a is "<<a<<endl;
    
     return 0;
}