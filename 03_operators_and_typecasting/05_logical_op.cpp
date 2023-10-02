#include<iostream>
using namespace std ;

int main()
{
    int a=4, b=5;
    //--> && --> and operator returns true if both are true .
    //--> || --> or operator returns true if any one is true .
    //--> ! --> returns opposite if true then returns false . if false then returns true.
cout<<"The value of the logical and operator (a==b)&&(a!=b) is "<<((a==b)&&(a!=b))<<endl;
cout<<"The value of the logical or operator (a==b)||(a!=b) is "<<((a==b)||(a!=b))<<endl;
cout<<"The value of the logical not operator (!(a==b)) is "<<(!(a==b))<<endl;

     return 0;
}