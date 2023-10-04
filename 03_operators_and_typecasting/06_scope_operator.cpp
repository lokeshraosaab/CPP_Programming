#include <iostream>
using namespace std;
int c = 45;
//--> :: --> it is scope resolution operator use for printing global varioable
// over same name local variable.
int main()
{
    int a, b;
    cout << "Enter the value of a: \n";
    cin >> a;
    cout << "Enter the value of b: \n";
    cin >> b;
    int c = a + b;
    cout << "The value of the sum is " << c << endl;
    cout << "The value of global variable c is " << ::c;
    return 0;
}