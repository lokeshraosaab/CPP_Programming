#include<iostream>
using namespace std ;

template<class T1, class T2>

class myclass{
    public:
    T1 data1;
    T2 data2;
    myclass(T1 a, T2 b){
        data1 = a;
        data2 = b;
    }
    void display(){
        cout<<this -> data1<<endl; // here is no need of this -> bcz here is no doubt about data1 there is only one data1 for access ...but we can use 
        // no error will be throw with or without the this -> ....
        cout<<this -> data2<<endl;
    }
};

int main()
{
    myclass<char, int>obj('S', 5);
    myclass<int , float>obj1(4, 4.55);

    obj.display();
    obj1.display();
     return 0;
}