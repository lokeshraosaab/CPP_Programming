#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // setw() it is a manipulator taken from #include<iomanip>
    // setw(6) it means next will be displays with width of 6.
    // endl it is also a manipulator used for display a new line.
    int a = 3, b = 12, c = 133, d = 1234;
    cout << "The value of a without setw() is " << a << endl;
    cout << "The value of b without setw() is " << b << endl;
    cout << "The value of c without setw() is " << c << endl;
    cout << "The value of d without setw() is " << d << endl;
    cout << endl;
    cout << "The value of a is " << setw(4) << a << endl;
    cout << "The value of b is " << setw(4) << b << endl;
    cout << "The value of c is " << setw(4) << c << endl;
    cout << "The value of d is " << setw(4) << d << endl;
    return 0;
}