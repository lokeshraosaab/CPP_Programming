#include<iostream>
using namespace std ;

int sum(int a, int b){
    // Formal parameters a and b will be taking values from actual parameters 
    // from num1 and num2....
    int c = a+b;
    return c;
}

void g(){
    cout<<"Hello, Good Morning "<<endl;
    return;
}

// formal parameters and actual parameters can be of same name....

int main()
{
    int num1, num2;
    cout<<"Enter the value of num1: "<<endl;
    cin>>num1;
    cout<<"Enter the value of num2: "<<endl;
    cin>>num2;
    cout<<"The sum of the numbers is "<<sum(num1,num2)<<".\n";
    g();

     return 0;
}