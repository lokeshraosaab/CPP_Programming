#include<iostream>
using namespace std ;

class Number{
    int a;
    public:
    Number(){
        a = 0;
    }
    Number(int num){
        a = num;
    }
    Number(Number &obj){   // with this reference format we can modifie the values....
                          // That's why we should use const arguement ....
        obj.a = 0;   
        a = obj.a;
    }
    void show(){
        cout<<"Number for this object is "<<a<<endl;
    }
};

int main()
{

    Number n1, n2(7), n3(9);
    n1.show();      // output will be 0...
    n2.show();      // output will be 7...
    n3.show();      // output will be 9...

    Number n4 = n2 ;
    n4.show();      // because in copy constructor we have modiefied on passed reference value to 0..so output will be 0..
    n2.show();      // output will be 0 ... because of modified value in constructor ...

    Number n5(n3);
    n5.show();      // output will be 0...
    n3.show();      // output will be 0..


// Hence copy constructor arguement should be const ....it is good practice ...
// one reason for passing const reference is , we should use const in c++ wherever possible so that objects 
// are not accidentally modiefied .....
     return 0;
}