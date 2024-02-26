#include<iostream>
using namespace std ;

class construct{
     int a, b;
     public:
     construct(); // it is default constructor having no arguement....
     void display(){
          cout<<"The area is : "<<a*b<<endl;
          }
};

construct :: construct(){
     a = 5;
     b = 6;
}

int main()
{
    construct c1;
    c1.display();
     return 0;
}