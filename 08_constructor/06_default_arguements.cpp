#include<iostream>
using namespace std ;

class simple{
    int data1, data2, data3;
    public:
    
    // constructor with default arguements .....and we know that default arguements
    // can be overwrite on passing arguements.....

    simple(int a, int b=9, int c=10){
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void display(){
        cout<<"Your given data1 is "<<data1<<", data2 is "<<data2<<" and data3 is "<<data3<<"."<<endl;
    }
};

int main()
{
    simple s1(2);
    s1.display();

    simple s2(7,3);
    s2.display();           // here data2 is overwrite by 3....

    simple s3(5,4,6);
    s3.display();           // here data2 is overwrite by 4 and data3 is overwrite by 6...

     return 0;
}