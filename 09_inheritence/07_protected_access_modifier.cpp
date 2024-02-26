// protected members :The class members declared as protected are inaccessible outside the class and behave as almost private 
// but they can be accessed by any derived class (sub-class) of that class ...

/* members             public mode derivation   protected mode derivation    private mode derivation
 private members       Not inherited            Not inherited                Not inherited
 protected members     protected                protected                    private
 public members        public                   protected                    private

*/

#include<iostream>
using namespace std ;

class Base{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
    Base(){
        a=1;
        b=2;
        c=3;
    }
};
//class Derived : private Base{  // both protected and public members of Base class will becomes private members of Derived class ..
//class Derived : protected Base{ //both protected and public members of Base class will becomes protected members of Derived class ..
class Derived : public Base{ // public members of Base class will become public members of Derived class and protected will become protected ..
    private:
    int d = 4;
    protected:
    int e = 5;
    public:
    int f = 6;
};

int main()
{
    Derived D1;

    /* in case of private mode visibility : b and c of Base class will become proivate of Derived 
    so these can not be access by oject of Derived class ...
    cout<<D1.a<<endl; // a is private member of Base class so it no inheritable ....Throw ERROR!!
    cout<<D1.b<<endl; // Throw ERROR!!
    cout<<D1.c<<endl; // Throw ERROR!!
    cout<<D1.d<<endl;// d is private of Derived class Throw ERROR!! 
    cout<<D1.e<<endl;// e is protected of Derived class Throw ERROR!!
    */
    //cout<<D1.f<<endl; // Yes this can be only display as f is public member of Derived class


    /* in case of protected visibility : b and c will become protected 
     so now b, c, e are now protected of Derived class 
     */
    //cout<<D1.f<<endl; // Yes this can be only display as f is public member of Derived class 


    /* in case of public visibility : b will become protected and c will become public  ...
    so now we can display c and f as they are public members of derived */
    cout<<D1.c<<endl;
    cout<<D1.f<<endl;
     return 0;
}