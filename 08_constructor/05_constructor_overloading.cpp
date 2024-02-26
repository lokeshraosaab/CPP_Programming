#include<iostream>
using namespace std ;

class area {
    int l , b;
    public:
    void display(){
        cout<<"Your area is "<<l*b<<endl;
    }

// We can have more than one constructor in a class with same name , as long as each has a different 
// list of arguements this concept is known as constructor overloading .....

    area(){
        l=0;
        b=0;
    }
    area(int x){
        l = x;
        b = 5;
    }
    area(int x, int y){
        l = x;
        b = y;
    }
};

int main()
{
    area A1;
    A1.display();

    area A2(6);
    A2.display();

    area A3(8,9);
    A3.display();

     return 0;
}