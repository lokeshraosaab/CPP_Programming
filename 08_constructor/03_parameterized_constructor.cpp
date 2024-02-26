#include<iostream>
using namespace std ;

class construct{
    int l, b;
    public:
    
    construct(int v1, int v2); // parameterized constructor having arguements.....
    void display(){
        cout<<"Your area is "<<l*b<<endl;
    }
};

construct::construct(int v1, int v2){
    l = v1;
    b = v2;
}

int main()
{
    construct c1(5,6); // implicit call to the constructor with object created ...
    construct c2 = construct(7,8); // explicit call to the constructor with object created ....
   // construct c3; // Here no default constructor exists for class "construct" so here it will throw error...
   c1.display();
   c2.display();
   
   
     return 0;
}