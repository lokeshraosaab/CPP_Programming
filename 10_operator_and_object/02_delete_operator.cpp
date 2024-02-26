// since it is programmer's responsibility to deallocate dynamically allocated memory. 
// programmers are provided delete operator by C++ language ....
/* 
syntax 
// release memory pointed by pointer variable ......
 delete pointer-variable;
*/

// to free dynamically allocated  array pointed by pointer-variable .....

// release block of memory pointed by pointer variable 
//delete[] pointer-variable ;

#include<iostream>
using namespace std ;

int main()
{   
    
    int* p = new int(6) ;
    cout<<"The value at address p before apply delete operator is "<<*p<<endl;

    float* q = new float(8) ;
    cout<<"The value at address q before apply delete operator is "<<*q<<endl;
    cout<<endl;
    //delete p ;
    delete q;

   // cout<<"The value at address p after apply delete operator is "<<*p<<endl; // output will be garbage value
    cout<<"The value at address q after apply delete operator is "<<*q<<endl; // output will be garbage value
    cout<<endl;
    int* arr = new int[4] ;
    arr[0] = 10;
    //*(arr + 1) = 20; // this can also be execute ......
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;

    cout<<"The value of arr[0] befor delete[] operator apply is "<<arr[0]<<endl;
    cout<<"The value of arr[1] befor delete[] operator apply is "<<arr[1]<<endl;
    cout<<"The value of arr[2] befor delete[] operator apply is "<<arr[2]<<endl;
    cout<<"The value of arr[3] befor delete[] operator apply is "<<arr[3]<<endl;
    cout<<endl;

    delete[] arr;

    cout<<"The value of arr[0] after delete[] operator apply is "<<arr[0]<<endl;// output will be garbage value
    cout<<"The value of arr[1] after delete[] operator apply is "<<arr[1]<<endl;// output will be garbage value
    cout<<"The value of arr[2] after delete[] operator apply is "<<arr[2]<<endl;// output will be garbage value
    cout<<"The value of arr[3] after delete[] operator apply is "<<arr[3]<<endl;// output will be garbage value
     return 0;
}