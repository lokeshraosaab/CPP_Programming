#include<iostream>
using namespace std ;

template<class T>
class Myclass{
    public:
    T data;
    Myclass(T a){
        data = a;
    }
    void display();
};

template<class T>                               // Member function template ...
void Myclass<T> :: display(){
    cout<<data<<endl;
}

int main()
{
    Myclass<int>obj(5);
    obj.display();
     return 0;
}