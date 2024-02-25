#include<iostream>

using namespace std ;

int expression(int a, int b){
    static int c; // This executes only once ....
    // static variable automatically initialized to default value = 0;
    //int c=0; // this will executes in every function call....
    c = c + 1;
    return ((a*b) + c);
     // Next time this fuction is run , The value of c will be retained...
}

int main()
{   
    int x = 4, y = 5;

    cout<<"The function returns "<<expression(4, 5)<<" on first call"<<endl;
    cout<<"The function returns "<<expression(4, 5)<<" on second call"<<endl;
    cout<<"The function returns "<<expression(4, 5)<<" on third call"<<endl;
    cout<<"The function returns "<<expression(4, 5)<<" on fourth call"<<endl;

    // from outputs we can easily understand the concept of static ...it means c = 0 is used only in first call of function  ..
    // in first call c becomes 1 by c = c+1 after that c = 1 for next call and will update by c = c + 1 and so on ...

    // for first call c = 0 + 1 = 1 ;  
    // for second call c = 1 + 1 = 2;
    // for third call c =  2 + 1 = 3;
    // for fourth call c = 3 + 1 = 4;
     return 0;
}