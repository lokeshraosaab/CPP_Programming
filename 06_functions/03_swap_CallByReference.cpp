#include<iostream>
using namespace std ;

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
        int x=4, y=5;
    cout<<"The value of x before swap is "<<x<<endl;
    cout<<"The value of y before swap is "<<y<<endl;
    cout<<endl;

    swap(&x, &y);
    // This is called call by raference .....
    cout<<"The value of x after swap is "<<x<<endl;
    cout<<"The value of y after swap is "<<y<<endl;
    cout<<endl;

    // we see that values of x and y will change because we are passing adresses of x and y as 
    // parameters..... 
    cout<<"Yes we see that swap is done....."<<endl;
     return 0;
}