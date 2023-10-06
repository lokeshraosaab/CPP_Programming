#include<iostream>
using namespace std ;

int main()
{
    int age[4] = {18,19,20,21};

    cout<<"These are the ages.... "<<endl;
    for(int i=0; i<4; i++){
        cout<<age[i]<<endl;
    }
    cout<<endl;
    
    int marks[4] = {75, 38, 90, 99};
    int a=0;

    cout<<"These are the marks...."<<endl;
    while(a<4){
        cout<<marks[a]<<endl;
        a++;
    }
     return 0;
}