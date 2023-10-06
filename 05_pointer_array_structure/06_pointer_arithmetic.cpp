#include<iostream>
using namespace std ;

int main()
{
    int marks[4] = {78, 95, 68, 99};
    int* ptr = marks;

    // cout<<*(ptr++)<<endl; //-->output will be 78 because ptr++ --> first print then increment.
    // cout<<*(++ptr)<<endl; // here ptr is ptr+1 from above step now we ++ptr ....
    // //-->output will be 68 because ++ptr first increment then prints 

    //ptr++ = ptr+1 ...and follows the same everytime....This is actually works as..
    //ptr+i = ptr + i*sizeof(data-type); --> This is algorithm for ptr++;
    cout<<"These are the marks...."<<endl;
    for(int i=0; i<4; i++){
        cout<<*(ptr)<<endl;
        ptr++; 
    }

     return 0;
}