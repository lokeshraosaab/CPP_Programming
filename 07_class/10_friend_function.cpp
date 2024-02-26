#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "Your complex number is " << a << "+" << b << "i" << endl;
    }
    friend complex sumcomplex(complex o1, complex o2);
} c1, c2, sum;

complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setNumber((o1.a + o2.a), (o2.a + o2.b));
    return o3;
}

// sum of complex numbers...
// 2 + 4i
// 4 + 6i
// ......
// 6 + 10i
// .......  

int main()
{
    cout << endl;
    c1.setNumber(2, 4);
    c1.printNumber();

    cout << endl;
    c2.setNumber(4, 6);
    c2.printNumber();

    cout << endl;
    sum = sumcomplex(c1, c2);
    sum.printNumber();

    return 0;
}