#include<iostream>
using namespace std ;

float volume(int r, int h){
    return (3.14*r*r*h) ;
}

float volume(int l, int b, int h){
    return (l*b*h) ;
}

float volume(int a){
    return (a*a*a) ;
}



int main()
{
    cout<<"The volume of cylinder of radius 3 and height 4 is "<<volume(3,4)<<endl;
    cout<<"The volume of a cuboid of length=2, breadth=5 and height=7 is "<<volume(2,5,7)<<endl;
    cout<<"The volume of a cube of dimensions of 7 is "<<volume(7)<<endl;
     return 0;
}