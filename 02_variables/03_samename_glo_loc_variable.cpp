#include<iostream>
using namespace std;
int glo = 7;

void sum(){
    int a=4;
    cout<<"The value of the variable a is "<<a<<".\n";
    // a is local variable of the sum() function . 
   // but here is no local variable as glo variable so glo is taken from global variable.
    cout<<"The value of the variable glo is "<<glo<<".\n";

}

int main()
{
    int glo = 8;
    cout<<"The value of variable glo is "<<glo<<".\n"; // --> it prints 8 that means
    // local variable haing same name of global variable take precedence over global variable.
    // here main() fuction have glo as local variable .
    sum();
    // we have one more option other than user defined function for display global function in 
    // main function over same name local variable by using :: --> scope resolution operator.
    // :: --> scope resolution operator .
    cout<<"The value of variable glo is "<<::glo<<".\n";
     return 0;
}