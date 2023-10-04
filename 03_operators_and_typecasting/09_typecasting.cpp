#include<iostream>
using namespace std ;

int main()
{
int a = 9;
float b = 45.3;

//--> These are two ways of typecasting but there will be same output -->
// (1).      (float)a
// (2).       float(a)

cout<<"The value of a is "<<a<<endl;
cout<<"The value of a is "<<float(a)<<endl;
cout<<"The value of a is "<<(float)a<<endl;
cout<<endl;
cout<<"The value of b is "<<b<<endl;
cout<<"The value of b is "<<(int)b<<endl;
cout<<"The value of b is "<<int(b)<<endl;
cout<<endl;
int c=int(b);
cout<<"The expression is "<<a+b<<endl;
cout<<"The expression is "<<a+int(b)<<endl;
cout<<"The expression is "<<a+(int)b<<endl;
cout<<"The expression is "<<a+c<<endl;

return 0;
}