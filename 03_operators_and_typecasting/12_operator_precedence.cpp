#include<iostream>
using namespace std ;

int main()
{
int a=4, b=5;

int c = a*5+b-15+25;
//int c = ((((a*5)+b)-15)+25);
// int c = 35

int d = 4*a+b;
// int d = (4*a)+b;
// int d = 16+5;
// int d = 21;

// operators of higher priority are evaluated first in absence of parenthesis .
// operators of equal priority are present in an expression then we follow left to right associativity.

cout<<c<<endl;
cout<<d<<endl;
     return 0;
}