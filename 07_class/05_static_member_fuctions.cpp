#include<iostream>
using namespace std ;

class static_members{
    // static data members ...declares followed by static ...
    // by default members of class are private untill you declare them public...
    static int a;
    static float b;
    static char c;
    // static variables are the codes executes only once but existance of the variable is till the program exist..
    // and value of the static variable is retained ...
    // we can't initialize static data members inside the class.....
    // we have to initialize them outside the class using scope resolution operator...
    public:
    static void getData();
    // staic functions can be called without any object by scope resolution operator ...
    // static functions..can be called any number of times ....
};
// initialization of static Data members ...
int static_members::a = 100;;  // default value of static data of type int and float except char is 0 untill you initialize them....
float static_members::b = 10.77;
char static_members::c = 'u';

// static member function....
void static_members::getData(){
    cout<<"The value of the static data member a is "<<a<<endl;
    cout<<"The value of the static data member b is "<<b<<endl;
    cout<<"The value of the static data member c is "<<c<<endl;
}

int main()
{
    // call for static member function....
    static_members::getData();
    static_members::getData();
    static_members::getData();

     return 0;
}