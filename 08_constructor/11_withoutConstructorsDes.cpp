#include<iostream>
using namespace std ;

class Number{
    int a = 8;
    public:
    // No constructor is written ....compiler provides own constructors ....on the base of conditions ...
    // No destructor is written ... compiler provides always its own destructor ....untill we are not written for us ...
    void show(){
        cout<<a<<endl;
    }
};

int main()
{
    Number n1,n2(n1);
    // Here we can clearly observe that compiler can provides only default constructor having no arguement and default copy constructor together ...
    // default constructors assign garbage values if we are not assigning ....
    n1.show();
    n2.show();
    // Number n3(5); 
    // compiler never provide default parameterized constructor ....
    // n3.show();
     return 0;
}