#include<iostream>
using namespace std ;

int main()
{
    int marks[5] = {70,60,50,40,30};

    // We can change the value of an array ....
    marks[2] = 100;
    
    cout<<endl<<"These are the marks ...."<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;

    // We have another ways for initialisation ....

    int mathmarks[5];
    mathmarks[0]=65;
    mathmarks[1]=61;
    mathmarks[2]=93;
    mathmarks[3]=99;
    mathmarks[4]=78;

    cout<<endl<<"These are the mathmarks ...."<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;
    cout<<mathmarks[4]<<endl;

     return 0;
}