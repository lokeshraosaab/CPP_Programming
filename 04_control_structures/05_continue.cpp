#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    do
    {
        i++;
        if (i == 2)
        {
            continue;
        }
        cout << i << endl;
    } while (i < 6);

    // --> here do while will give 6 also as output because when 5 pass from while condition
    // using i++ it become 6 and displays....

    cout << endl;
    cout << "using for loop" << endl;

    for (int a = 1; a < 6; a++)
    {
        if (a == 2)
        {
            continue;
        }
        cout << a << endl;
    }
// both loops does not display 2 because at 2 iteration of the both loops 
// move to the next iteration by skipping everything below continue.
    
    return 0;
}