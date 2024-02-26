#include<iostream>
using namespace std ;

template<class T1, class T2>   // T1, T2 can be of any data-type .......
float funcAvg(T1 a, T2 b){
    float avg = (a+b)/2.0 ;
    return avg;
}

int main()
{   
    // float Average = funcAvg<float, int>(7.2,2); // This is the more correct way for using function template function call..
    float Average = funcAvg(7.2,2); // This is also correct no need of specify data types for function templates in function call ...
    // it will be automatically detect by values passed ....
    cout<<"The average of these numbers is "<<Average<<endl;
     return 0;
}