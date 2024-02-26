#include<iostream>
using namespace std ;

void func(int a){
     cout<<"The value of a in the function is "<<a<<endl;
}

template<class T>
void func(T a){
     cout<<"The value of a in the templatised function is "<<a<<endl;
}

int main()
{
    func(4); // Exact match takes the highest priority ....
    // output will be ...The value of a in the function is 4
    // if exact match does not present then template function will execute .....
    func<int>(5); // will always call templatised function .... 
     return 0;
}