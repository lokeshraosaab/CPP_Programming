#include<iostream>
using namespace std ;

class Number{
    int a;
    public:
    Number(){
        a=0;
    }
    Number(int num){
        a = num;
    }

    // copy constructor ...
    // when no copy constructor is found,  complier supplies its own copy constructor ...
    Number(const Number &obj){
        cout<<"Copy constructor called ....!!!!!"<<endl;
       //  obj.a = 0; //---> it will throw error because passing arguement becomes constant using const ..
        a = obj.a;
    }

    void show(){
        cout<<"The number for this object is "<<a<<" ."<<endl;
    }
};

int main()
{
    Number x, y(10), z(40), z2;
    cout<<endl;
    x.show();
    y.show();
    z.show();

    cout<<endl;
    Number y1(y); // copy constructor invoked ...
    y.show();
    Number z1(z); // copy constructor invoked ....
    z.show();
    cout<<endl;

    cout<<"copy constructor not called here ..."<<endl;
    // z2(z); // -->This is not valid ...it will throw error...
    z2 = z;      // copy constructor not called ...but here z is assign to z2 without using copy constructor ...i.e. assignment operator...
    z2.show();
    cout<<endl;

    Number z3 = z; // copy constructor invoked  ....when separately object is created ...then copy constructor will be called in this case..
    z3.show();

     return 0;
}