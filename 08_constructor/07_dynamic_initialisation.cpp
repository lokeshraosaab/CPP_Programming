#include<iostream>
using namespace std ;

class BankAccount{
    int principal;
    int years;
    float InterestRate;
    float Amount;
    public:
    BankAccount(){}   // -- This is default constructor it is important for creating objects without arguements...
    // it will assign values to private members as mentioned in it ....if no value is mentioned by this all will be automatically assigned from garbage values ....
    BankAccount(int p, int y, float r);   // interest rate like 0.04 ....
    BankAccount(int p, int y, int R);    // interest rate like 14 ....here it is in percentage......
    void show(){
        cout<<"Your deposit principal was "<<principal<<" so now after "<<years
        <<" years, Your total amount is "<<Amount<<endl;
    }
};

BankAccount :: BankAccount(int p, int y, float r){
    principal = p;
    years = y;
    InterestRate = r;
    Amount = principal;
    for(int i=0; i<years; i++){
    Amount = Amount * (1+InterestRate);
    }
}
BankAccount :: BankAccount(int p, int y, int R){
    principal = p;
    years = y;
    InterestRate = float(R)/100;
    Amount = principal;
    for(int i=0; i<years; i++){
    Amount = Amount * (1+InterestRate);
    }
}


int main()
{
    //BankAccount BD1, BD2, BD3;

    int p, y;
    int R;
    float r;

    cout<<"Enter your p y and r ...."<<endl;
    cin>>p>>y>>r;
    //BD1 = BankAccount(p,y,r); // it is explicit call to the constructor ...
    BankAccount BD1(p,y,r);    // it is implicit call to the constructor ....
    BD1.show();

    cout<<"Enter your p y and R ...."<<endl;
    cin>>p>>y>>R;
    //BD2 = BankAccount(p,y,R);
    BankAccount BD2(p,y,R);
    BD2.show();
    
    BankAccount BD3;
    BD3.show();

     return 0;
}