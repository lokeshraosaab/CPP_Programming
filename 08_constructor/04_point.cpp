#include<iostream>
using namespace std ;

class point{
    int x, y;
    public:
    point(int a, int b){
        x = a;
        y = b;
    }
    void display(){
        cout<<"Your x and y co-ordinates are "<<x<<" and "<<y<<" ...."<<endl;
        cout<<"Means your point is ("<<x<<","<<y<<")"<<endl;
    }
};

int main()
{
    point p1(2,6);
    p1.display();
    point p2(3,6);
    p2.display();
     return 0;
}