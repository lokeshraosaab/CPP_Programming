#include<iostream>
using namespace std ;

//use of new for dynamically allocation of memory for a object of class complex .....

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
    complex* ptr = new complex[3]; // dynamically allocates memory for 3 objects of class complex and returns pointer to 
    // the first object of the class, which is assign to ptr here (a pointer)

    //(*ptr).setData(1,5); // This is exactly same as ...
    ptr->setData(1,5);
    ptr->getData();
    cout<<endl;
    (ptr+1)->setData(3,7);
    (ptr+1)->getData();
    cout<<endl;
    (ptr+2)->setData(9,8);
    (ptr+2)->getData();
    cout<<endl;    
    (ptr+3)->setData(10,15);
    (ptr+3)->getData();    
    delete[] ptr;
     return 0;
}