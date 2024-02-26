#include<iostream>
using namespace std ;

template<class T1, class T2 = int, class T3 = char>
//template<class T1 = float, class T2 = int, class T3 = char>

class applyrules{
    public :
    T1 a;
    T2 b;
    T3 c;
    applyrules(T1 x, T2 y, T3 z){
        a = x;
        b = y;
        c = z;
    }
    void display(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
    }
};

int main()
{
    applyrules<float>obj1(5.6, 6, 'b');
    obj1.display();
    cout<<endl;
    applyrules<float, char>obj2(5.7, 'a', 'c');
    obj2.display();
    cout<<endl;
    applyrules<float, char , int>obj3(5.8, 'd', 9);
    obj3.display();
    cout<<endl;
     return 0;
}