#include<iostream>
using namespace std ;

class c2;

class c1{
    int num1;
    public:
    void setNumber(int a){
        num1 = a;
    }
    int display(){
        return num1;
    }
    friend void swap(c1 &, c2 &);
};

class c2{
    int num2;
    public:
    void setNumber(int a){
        num2 = a;
    }
    int display(){
        return num2;
    }
    friend void swap(c1 &, c2 &);

};

void swap(c1 & oc1 , c2 & oc2){
    int temp = oc1.num1 ;
    oc1.num1 = oc2.num2 ;
    oc2.num2 = temp;
}

int main()
{
    c1 oc1;
    oc1.setNumber(5);

    c2 oc2;
    oc2.setNumber(10);

    cout<<"The value of num1 before swap is "<<oc1.display()<<endl;
    cout<<"The value of num2 before swap is "<<oc2.display()<<endl;
    cout<<endl;

    swap(oc1, oc2);

    cout<<"The value of num1 after swap is "<<oc1.display()<<endl;
    cout<<"The value of num2 after swap is "<<oc2.display()<<endl;
     return 0;
}