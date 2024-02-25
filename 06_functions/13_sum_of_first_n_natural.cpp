#include<iostream>
using namespace std ;

int sum(int n){
    if(n==1 || n==2){
        return 2*n-1;
    }
    return n + sum(n-1) ;
}

int main()
{
    int n;
    cout<<"Enter the value of n for the sum of first n natural numbers: "<<endl;
    cin>>n;
    cout<<"The sum of the first "<<n<<" natural numbers is "<<sum(n)<<endl;
     return 0;
}