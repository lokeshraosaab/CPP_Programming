// Here we are using special syntax ...
// C++ supports a special syntax for passing arguements to multiple base classes constructors ..

#include<iostream>
using namespace std ;

class Base1{
    int data1;
    public:
    Base1(int x){
        data1 = x;
        cout<<"Constructor of Base1 class called .... "<<endl;
    }
    void printData(){
        cout<<"The value of data1 is "<<data1<<endl;
    }
};
class Base2{
    int data2;
    public:
    Base2(int x){
        data2 = x;
        cout<<"Constructor of Base2 class called .... "<<endl;
    }
    void printData(){
        cout<<"The value of data2 is "<<data2<<endl;
    }
};

class Drived : public Base1, public Base2{
    int data3, data4;
    public:
    //Drived(int a, int b, int c, int d) : Base1(c), Base2(d){ // This will also execute as we are passing any two argements 
    // to the base classes constructors from four arguements .....
    Drived(int a, int b, int c, int d) : Base1(a), Base2(b){
        data3 = c;
        data4 = d;
        cout<<"Constructor of Drived class called ...."<<endl;
    }

    // As we are seeing Base1 and Base2 both have printData() same function 
    // so here it is ambiguity we have to solved using again make a same name function in Drived class
    // and use of scope resolution operator in the Drived printData() function we can call both prinData function of Base1 and Base2 and then its body execute ....

    void printData(){
        Base1 :: printData() ;
        Base2 :: printData() ;
        cout<<"The value of data3 is "<<data3<<endl;
        cout<<"The value of data4 is "<<data4<<endl;
    }
};

int main()
{
    Drived D1(2, 3, 4, 5);
    D1.printData();
     return 0;
}