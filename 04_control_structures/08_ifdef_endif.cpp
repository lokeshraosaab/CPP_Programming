// Here #ifdef #ifndef #if #elif #else #endif 
// #undef #define 
#include<iostream>
using namespace std ;

# define CHECK 10

int main()
{   
    // #ifdef & #endif 
    // if the macro with name as 'macroname' is defined then the block of statements 
    // will execute normally but if it is not defined, the compiler will simply skip
    // this block of statements ....

    #ifdef CHECK
    cout<<"1: Yes CHECK is defined (output of ifdef)."<<endl;
    #else
    cout<<"No, CHECK is not defined (output of else under ifdef). "<<endl;
    #endif

    // ifndef & #endif
    // In case of #ifndef the block of statements between #ifndef and #endif will be executed only if the 
    // macro or the identifier with #ifndef is not defined ....
    
    #undef CHECK
    #define CHECK 15
    cout<<endl;
    cout<<"CHECK 10 is undefined and and then CHECK 15 defined "<<endl;
    cout<<endl;
    #ifndef CHECK
    cout<<"No, CHECK is not defined (output of ifndef)."<<endl;
    #elif CHECK == 10
    cout<<"2: Yes CHECK == 10 "<<endl;
    #else
    cout<<"2: You are wrong OK CHECK != 10 "<<endl;
    #endif

    // #if & #endif

    #if !defined(NOCHECK) && (CHECK < 10*8 - 2)
    cout<<"3: Yes "<<endl;
    #endif

     return 0;
}