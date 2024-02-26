// initialisation list in constructors ......
/*

syntax for initialization list in constructor ....

constructor(arguement-list) : initialisation-section {
    assignment + other code .....
} 

class Test {
    int a, int b;
    public:
    Test(int i, int j) : a(i), b(j){
        constructor-body 
    }
};

*/
#include<iostream>
using namespace std ;

class Test {
    int a;
    int b;
    public:
    // Test(int i, int j) : a(i) , b(j)
    // Test(int i, int j) : a(i) , b(i+j)
    // Test(int i, int j) : a(i) , b(a+j)
    // Test(int i, int j) : a(i) , b(2*j)
    //  Test(int i, int j) : b(j) , a(i)
    //  Test(int i, int j) : b(j) , a(i+b)  // it will exexute without any error ...
// the value of a will be garbage value because of b used in initialisation of a...
// Red Flag !! this will create problems because a will be initialised first because a is declared first ....

    //  Test(int i, int j) : a(i)
    // {
    //     b = j ;

      Test(int i, int j)
    {
        a = i;
        b = j;
        cout<<"Constructor Executed ....."<<endl;
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
    }
};


int main()
{
    Test t1(2,3);
     return 0;
}
