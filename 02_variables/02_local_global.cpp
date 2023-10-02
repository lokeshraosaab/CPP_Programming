#include<iostream>

using namespace std;
int glo = 6;

int main()
{
    int loc = 7;
    cout<<"The value of the global variable glo is: "<<glo<<".\n";
    cout<<"The value of the local variable loc is: "<<loc<<".\n";
     return 0;
}