#include<iostream>
using namespace std ;

int main()
{
    int marks[4] = {75, 89, 90, 95};
    int* ptr = &marks[0]; // or ptr = marks;
    for(int i=0; i<4; i++){
        cout<<endl;
        cout<<(ptr+i)<<endl; //display addresses....
        cout<<*(ptr+i)<<endl;// display values at addresses...
        cout<<endl;
}
     return 0;
}