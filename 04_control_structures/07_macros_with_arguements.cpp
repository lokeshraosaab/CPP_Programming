// macros with arguements 
// macros defined with arguements works similarly as functions ....

#include<iostream>
using namespace std ;

# define area(l, b) (l*b)

int main()
{
    int l, b;
    cout<<"Enter the length l : "<<endl;
    cin>>l;
    cout<<"Enter the length b : "<<endl;
    cin>>b;
    cout<<"The area of the rectangle of length "<<l<<" and breadth "<<b<<" is "<<area(l,b)<<endl;
     return 0;
}