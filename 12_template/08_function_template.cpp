#include<iostream>
using namespace std ;

template<class T>
void func(T a){
     cout<<"The value of a in the templatised function is "<<a<<endl;
}

int main()
{
    func(4);
    // output will be ...The value of a in the templatised function is 4 ....
    //because here exact match does not exist so template function will execute .....
     return 0;
}