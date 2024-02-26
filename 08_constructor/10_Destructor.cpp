#include<iostream>
using namespace std ;
// Destructor never takes an arguement nor does it return any value ....

int count = 0;

class num{
    public:
    num(){
        count++;
        cout<<"This is the time when constructor is called for the object number "<<count<<endl;
    }
    ~num(){
        cout<<"This is the time when destructor is called for the object number "<<count<<endl;
        count--;
    }
};

int main()
{
    cout<<"We are in our main function ..."<<endl;
    cout<<"Creating first object n1 ..."<<endl;
    num n1;
    {
        cout<<"Entering this block ... "<<endl;
        cout<<"Creating two more objects ...."<<endl;
        num n2, n3;
        cout<<"Exiting this block..."<<endl;
    }

    cout<<"We are back to main ..."<<endl;

     return 0;
}