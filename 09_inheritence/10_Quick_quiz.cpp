#include<iostream>
#include<cmath>
using namespace std ;
// Create 2 classes 
// 1. simpleCalculator : takes input of two numbers using a utility function and performs +, -, *, / 
// and displays the result using another function ...
// 2. scientificCalculator : takes input of 2 numbers using a utility function and prforms any four scientific 
// operations of your choice and displays the result using another functions .
// 3. create another class Hybridcalculator and inherit it using these 2 classes:
// 4. create an object of Hybridcalculator and display results of simple and scientific 
// calculator .......... 

class simpleCalculator{
    int a, b;
    public:
    void set_simpleCalc_Data(){
        cout<<"Enter the value of first number a : "<<endl;
        cin>>a;
        cout<<"Enter the value of second number b : "<<endl;
        cin>>b;
    }
    void perform_operations_simpleCalc(){
        cout<<"The sum of a and b is "<<(a+b)<<endl;
        cout<<"The subtraction of a and b is "<<(a-b)<<endl;
        cout<<"The product of a and b is "<<(a*b)<<endl;
        cout<<"a devided by b returns : "<<float(a)/b<<endl;
    }
};
class scientificCalculator{
    float x, y;
    public:
    void set_scientificCalc_Data(){
        cout<<"Enter the value of x : "<<endl;
        cin>>x;
        cout<<"Enter the value of y : "<<endl;
        cin>>y;
    }
    void perform_operations_scientificCalc(){
        cout<<"The value of sin(x) and sin(y) is "<<sin(x)<<" and "<<sin(y)<<endl;
        cout<<"The value of cos(x) and cos(y) is "<<cos(x)<<" and "<<cos(y)<<endl;
        cout<<"The value of tan(x) and tan(y) is "<<tan(x)<<" and "<<tan(y)<<endl;
        cout<<"The value of exp(x) and exp(y) is "<<exp(x)<<" and "<<exp(y)<<endl;
    }
};
class HybridCalculator : public simpleCalculator , public scientificCalculator{

};


int main()
{
    // simpleCalculator sc1;
    // sc1.set_simpleCalc_Data();
    // sc1.perform_operations_simpleCalc();
    // cout<<endl;
    // scientificCalculator stc1;
    // stc1.set_scientificCalc_Data();
    // stc1.perform_operations_scientificCalc();
    HybridCalculator H1;
    H1.set_simpleCalc_Data();
    H1.perform_operations_simpleCalc();
    cout<<endl;
    H1.set_scientificCalc_Data();
    H1.perform_operations_scientificCalc();
     return 0;
}

// 1. multiple inheritance is using in this program.
// 2. public visibility mode is using ...
// : public simpleCalculator , public scientificCalculator
// 3. inheritance is the simplest for code reusability implementation ....