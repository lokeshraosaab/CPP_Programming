#include<iostream>
using namespace std ;

void swap(int a, int b){        // temp a b
    int temp = a;               //   4  4 5
    a = b;                      //   4  5 5
    b = temp;                   //   4  5 4  
                        // above format can swap the values of a and b ...
                    
}

int main()
{
    int x=4, y=5;
    cout<<"The value of x before swap is "<<x<<endl;
    cout<<"The value of y before swap is "<<y<<endl;
    cout<<endl;

    swap(4, 5);
    // This is called call by value .....
    cout<<"The value of x after swap is "<<x<<endl;
    cout<<"The value of y after swap is "<<y<<endl;

    // we see that values of x and y will not change because we are passing copy of x and y as 
    // actual parameters..... 
    return 0;
}