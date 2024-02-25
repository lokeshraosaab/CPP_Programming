#include<iostream>
using namespace std ;

float factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*factorial(n-1) ;
}

int main()
{
    int n;
    cout<<"Enter the value of n for factorial of n: "<<endl;
    cin>>n;
    cout<<endl;
    cout<<"The value of the factorial "<<n<<" is "<<factorial(n)<<endl;   
     return 0;
}