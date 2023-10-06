// Enumeration (enum) --> it helps to assign constants to a set of names to make the program
// easier to read, maintain, and understood ....

#include<iostream>
using namespace std ;

typedef enum meal{
    breakfast,
    lunch,
    dinner
}mtime;

// enum meal{breakfast, luch, dinner}; both expressions are same...
// because whitespaces are ignored by c++ language.....

int main()
{
    //enum meal m1, m2, m3;
    mtime m1, m2, m3;
    
    m1 = breakfast;
    m2 = lunch;
    m3 = dinner;
    // Now m1, m2, m3 have assigned integral values such as 0, 1, 2....

    cout<<m1<<endl;
    cout<<m2<<endl;
    cout<<m3<<endl;

     return 0;
}