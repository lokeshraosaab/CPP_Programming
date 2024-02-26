#include<iostream>
using namespace std ;

class A{
    int a;
    public:
    // void setData(float a){ // for understanding concept .....
    void setData(int a){
      // a = a; 
      //in this case these both a are of setData(int a) because first priority is goes for local variable of the function
      // so here by this our motive is not successful and also this will not throw any error but is not good way if we are using 
      // same name for the local variable of the function and variable of the class ... form here no value will be assign to the 
      // variable a of the class ...and garbage value will be shown from the getData() function ...

      // if we want use same name variable for any purpose then to resolve this problem we have a keyword given in C++...
     this->a = a;
    }
    void getData(){
        cout<<"The value of a is "<<a<<endl;
    }
};

// this is a keyword in C++ which is a pointer which points to the obect which invokes the member function ...

int main()
{
    A obj;
    obj.setData(5);
    obj.getData();
     return 0;
}