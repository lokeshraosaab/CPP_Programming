#include<iostream>
using namespace std ;

int fibonacci(int n){
if(n==1 || n==2){
    return n-1;
}
return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
   int n;
   cout<<"Enter the value of n for nth term of fibonacci series :"<<endl;
   cin>>n;
   cout<<"The value of term "<<n<<" of fibonacci series is "<<fibonacci(n)<<endl; 
     return 0;
}