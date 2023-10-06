#include<iostream>
using namespace std ;

typedef union money{
    int rice; // 4 bytes
    char car; // 1 byte
    float pounds;// 4 bytes 
}mon;

// unions provide better memory managements than structures...
// unions allocates memory of highest memory data type , because only 
// one variable used from unions at a time.
// if you use more than one variable values will be overwrite , outputs will be from 
// garbage ...and
// different than expected... only one that was latest will be correct.

int main()
{
    //union money m1;
    mon m1;
    
    //m1.rice = 100;
    m1.car = 'H';
    // m1.pounds = 45.7;

    // use only one variable at a time.

    //cout<<m1.rice<<endl;
    cout<<m1.car<<endl;
    // cout<<m1.pounds<<endl;
    
     return 0;
}