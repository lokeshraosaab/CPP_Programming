#include<iostream>
using namespace std ;

int main()
{
    // Basic example of a pointer ...
    int a = 4;
    int* ptr  = &a;
    cout<<"The value of a is "<<*ptr<<endl;

    // C++ have two operators new and delete that perform the task of allocating and freeing 
    // the memory in a better and easier way ....

    // To allocate memory of any data-type ......the syntax is 
    // pointer-variable = new data-type ;

    // new keyword ...
    // we can also initialize the memory using new operator ....

    int* p = new int(6) ;
    cout<<"The value at address p is "<<*p<<endl;

    float* q = new float(8) ;
    cout<<"The value at address q is "<<*q<<endl;
     
    // new operator is also used to allocate a block (an array) of  memoryof type data-type 

    int* arr = new int[4] ;
    // dynamically allocates memory for 4 integers continously of type int and returns
    // pointer to the first element of the sequence ....
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;

    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;
    cout<<"The value of arr[3] is "<<arr[3]<<endl;

     return 0;
}