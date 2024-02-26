#include<iostream>
using namespace std ;

typedef class employee{
    private:
    int a, b, c;
    public:
    int d, e;

    void setData(int a1, int a2, int a3);
    void getData(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }

}ep;

    void ep :: setData(int a1, int b1, int c1){
        a = a1;
        b = b1;
        c = c1;
    }


int main()
{
    ep don;
    // don.a = 134; This will throw error as a is private...
    don.d = 12;
    don.e = 14;
    don.setData(6,8,10);
    don.getData();
     return 0;
}