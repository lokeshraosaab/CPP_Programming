#include<iostream>
using namespace std ;

class complex{
    int real;
    int imaginary;
    public:
    void setData(int a, int b){
        real = a;
        imaginary = b;
    }
    void getData(){
        cout<<"The real part of complex is "<<real<<endl;
        cout<<"The imaginary part of the complex is "<<imaginary<<endl;
    }
};

int main()
{
    complex c1;
    complex* ptr = &c1; // This is pointer to object....
    //(*ptr).setData(1,5); // This is exactly same as ...
    ptr->setData(1,5);
    //(*ptr).getData(); // This is exactly same as ....
    ptr->getData();

     return 0;
}