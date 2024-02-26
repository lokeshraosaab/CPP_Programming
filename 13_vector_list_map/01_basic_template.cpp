#include<iostream>
using namespace std ;

template<typename T>
// T can be any ...int , float , char , class , any other user defined data-type ....etc.
void func(T a){
    cout<<"This is templised function func() ... passed value is "<<a<<endl;
}

// 'template' and 'typename' are the keywords in c++ to support template ....
// the second keyword can always be replaced by keyword 'class' ...

template<class T1>
void func1(T1 b){
    cout<<"This is templised function func1().... passed value is "<<b<<endl;
}


int main()
{
    func('c');
    cout<<endl;
    func1(5);
     return 0;
}