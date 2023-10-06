#include<iostream>
using namespace std ;

typedef struct employee{
    int code; // 4 bytes
    float salary; // 1 byte 
    char favChar; // 4 bytes
}emp;

// struct allocates the memory of 4 + 1 + 4 = 9 bytes....

int main()
{
    emp e1, e2, e3, e4;
    e4 = {103, 250000, 'R'}; //--> This is easy way of initialisation. But keep in mind pattern of data-types
    // mentioned in structure exactly same pattern should be follow in braces...

    // Details of employee e1 -->
    e1.code = 100;
    e1.salary = 550000;
    e1.favChar = 'S';
    
    // Details of employee e2 -->
    e2.code = 101;
    e2.salary = 450000;
    e2.favChar = 'P';

    // Details of employee e3 -->
    e3.code = 102;
    e3.salary = 350000;
    e3.favChar = 'K';

    cout<<"Details of employee e1"<<endl;
    cout<<e1.code<<endl;
    cout<<e1.salary<<endl;
    cout<<e1.favChar<<endl;
    cout<<endl;

    cout<<"Details of employee e2"<<endl;
    cout<<e2.code<<endl;
    cout<<e2.salary<<endl;
    cout<<e2.favChar<<endl;
    cout<<endl;

    cout<<"Details of employee e3"<<endl;
    cout<<e3.code<<endl;
    cout<<e3.salary<<endl;
    cout<<e3.favChar<<endl;
    cout<<endl;
    
    cout<<"Details of employee e4"<<endl;
    cout<<e4.code<<endl;
    cout<<e4.salary<<endl;
    cout<<e4.favChar<<endl;
    cout<<endl;
    
     return 0;
}