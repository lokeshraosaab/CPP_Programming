#include<iostream>
using namespace std ;

void change1(const int* a, const int* b){
    // a = 50;
    // b = 100;
    // Here above change is not possible because of const qualifier ...
    // it gives error ...
    // so with the use of const the arguements are constant arguements.... 
}
void change2(int* a, int* b){
    *a = 70;
    *b = 60;
}

int main()
{
    int x, y;
    cout<<"Enter the value of x "<<endl;
    cin>>x;
    cout<<"Enter the value of y "<<endl;
    cin>>y;
    
    cout<<"Product of x and y before fuction call change 1 is "<<x*y<<endl;
    change1(&x,&y);
    cout<<"Product of x and y after fuction call change 1 is "<<x*y<<endl;
    cout<<endl;
    // change1 function will not change values of x and y because of constant arguements...

    cout<<"Product of x and y before fuction call change 2 is "<<x*y<<endl;
    change2(&x,&y);
    cout<<"Product of x and y after fuction call change 2 is "<<x*y<<endl;

    return 0;
}