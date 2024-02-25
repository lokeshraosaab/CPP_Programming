#include<iostream>
using namespace std ;

// two or more functions can have the same name but diferent parameters....
// such functions are called function overloading ...

int sum(int a, int b){
    cout<<"by using sum() function with 2 arguements is ";
    return (a+b) ;
}
int sum(int a, int b, int c){
    cout<<"by using sum() function with 3 arguements is ";
    return (a+b+c) ;
}

int main()
{
    cout<<"The sum of the values 3 and 2 "<<sum(3, 2)<<endl;
    cout<<"The sum of the values 3, 7 and 5 "<<sum(3,7,5)<<endl;

     return 0;
}