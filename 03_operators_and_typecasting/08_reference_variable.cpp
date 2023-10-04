#include<iostream>
using namespace std ;

int main()
{
float a=3.45;
float &b = a; //--> It is called reference variable now a and b have same value.
cout<<"The value of a is "<<a<<endl;
cout<<"The value of b is "<<b<<endl;

     return 0;
}