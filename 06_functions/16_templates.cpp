#include<iostream>
using namespace std ;

template <typename T> 

T myMax(T a, T b){
return (a>b) ? a : b ;
}

int main()
{
    cout<<myMax<int>(3,2)<<endl;
    cout<<myMax<float>(5.6,7.8)<<endl;
    cout<<myMax<char>('g','e')<<endl;
    cout<<myMax<bool>(true,false)<<endl;

     return 0;
}