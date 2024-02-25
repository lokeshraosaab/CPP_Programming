#include<iostream>
using namespace std ;

// swap(int &a, int &b); --> This is another way for call by reference instead 
// of using pointer....

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    
    int x=4, y=5;
    cout<<"The value of x before swap is "<<x<<endl;
    cout<<"The value of y before swap is "<<y<<endl;
    cout<<endl;

    swap(x, y);
    cout<<"The value of x after swap is "<<x<<endl;
    cout<<"The value of y after swap is "<<y<<endl;

     return 0;
}