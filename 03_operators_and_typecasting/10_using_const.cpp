#include<iostream>
using namespace std ;

int main()
{
int a=35;
cout<<"The value of a was "<<a<<endl;
a=45;
cout<<"The value of a is "<<a<<endl;
float b=35.5;
cout<<"The value of b was "<<b<<endl;
b=45.5;
cout<<"The value of b is "<<b<<endl;
char c='v';
cout<<"The value of c was "<<c<<endl;
c='u';
cout<<"The value of c is "<<c<<endl;
//--> now we use const before data types for making values constant of our variables.

const int x=4;
// x=5; // here error will be produce because of using const  --> 
cout<<"The value of x is "<<x<<endl;

const float y=4.5;
// y=5.6; //here error will be produce because of using const  --> 
cout<<"The value of y is "<<y<<endl;


const char z='p';
// z='q'; //here error will be produce because of using const  --> 
cout<<"The value of z is "<<z<<endl;

     return 0;
}