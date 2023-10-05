#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n for display first n natural numbers " << endl;
    cin >> n;
    cout<<"First "<<n<<" natural numbers are "<<endl;
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
    return 0;
}