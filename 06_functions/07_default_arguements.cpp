#include<iostream>
using namespace std ;

float moneyRecieved(int currentMoney, float factor = 1.04){
    return currentMoney*factor;
}

// if default arguement is pass in the function call then dafault value will be overwite and 
// passed value will be used ....if there is no pass value for default arguement then as given
// default value will be used....  

// factor is default arguement....
// currentMoney is compulsory arguement....
// dafault arguement should be in extreme right and compulsory arguement should be in extreme left....

int main()
{   
    int money = 10000;
    float VipFactor = 1.1; // For Vip.......
    cout<<"If you have "<<money<<" Rs. in your bank account, then you will recieve "<<moneyRecieved(money)<<" Rs. after 1 year. "<<endl;
    cout<<"For VIP : If you have "<<money<<" Rs. in your bank account, then you will recieve "<<moneyRecieved(money, VipFactor)<<" Rs. after 1 year. "<<endl;
     return 0;
}