#include<iostream>
using namespace std ;

void change(const int* a, int* b){
    // Here value at a will not change even it is call by reference because it is constant arguement because of const...
    // value at b can be change because it is call by reference and it is not constant arguement...
    *b = 50;
}
// This change() function can change only the value at b....

int main()
{
    int x, y;
    cout<<"Enter the value of x : "<<endl;
    cin>>x;
    cout<<"Enter the value of y : "<<endl;
    cin>>y;
    cout<<"The value of the product "<<x<<" and "<<y<<" before fuction call is : "<<x*y<<endl;
    change(&x, &y); 
    cout<<"The value of the product "<<x<<" and "<<y<<" after fuction call is : "<<x*y<<endl;
     return 0;
}