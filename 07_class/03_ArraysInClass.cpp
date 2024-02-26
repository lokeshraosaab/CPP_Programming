#include<iostream>
using namespace std ;

class shop{
    int counter;
    int itemId[100];
    int itemPrice[100];

    public:
    void init_counter(){
        counter = 0;
    }
    void setData();
    void getData();
};

void shop::setData(){
    cout<<"Enter your itemId of item number "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter your itemPrice with itemId "<<itemId[counter]<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void shop::getData(){
    for(int i =0; i<counter; i++){
    cout<<"Price of your item with itemId "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter no. of items of your dukaan to be listed ...."<<endl;
    cin>>n;
    shop dukaan;
    dukaan.init_counter();
    for(int i=0; i<n; i++){
        dukaan.setData();
    }
    dukaan.getData();
     return 0;
}