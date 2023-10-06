#include<iostream>
using namespace std ;

int main()
{
    int marks[4] = {98, 99, 97, 80};
    int* ptr = marks; // i.e. ptr = &marks[0];
    cout<<"The address of ptr is "<<ptr<<endl;
    cout<<"The address of (ptr+1) is "<<(ptr+1)<<endl;
    cout<<"The address of (ptr+2) is "<<(ptr+2)<<endl;
    cout<<"The address of (ptr+3) is "<<(ptr+3)<<endl;

     return 0;
}