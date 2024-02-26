#include<iostream>
using namespace std ;

// class complex;   // Forward declaration..... 
// no need of forward declaration if you declaring the entire class as friend class.....
// but the class declared as friend class should be after the class in which friend class declared ...

class complex {
    int a, b;
    public :
    void setNumber(int n1,int n2){
        a = n1;
        b = n2;
    }
    void printNumber(){
        cout<<"Your complex number is "<<a<<"+"<<b<<"i"<<endl;
    }

    // Declaring the entire class as friend class.......
    friend class calculator;
};

class calculator {
    public:
    int add(int a, int b);
    int sumRealcomplex(complex o1, complex o2);
    int sumCompcomplex(complex o1, complex o2); 
};


int calculator::sumRealcomplex(complex o1, complex o2){
    return (o1.a + o2.a) ;
}
int calculator::sumCompcomplex(complex o1, complex o2){
    return (o1.b + o2.b);
}


int main()
{
    complex c1, c2;
    
    c1.setNumber(1,2);
    c1.printNumber();

    c2.setNumber(2,4);
    c2.printNumber();

    calculator calc;

    int realPart = calc.sumRealcomplex(c1,c2);
    int imgPart = calc.sumCompcomplex(c1,c2);

    cout<<"The sum of real part of complex numbers c1 and c2 is: "<<realPart<<endl;
    cout<<"The sum of imaginary part of complex numbers c1 and c2 is: "<<imgPart<<endl;
     return 0;
}