#include<iostream>
using namespace std ;

class shop_item{
    int item_id;
    float item_price;
    public:
    void setData(int a, float b){
        item_id = a;
        item_price = b;
    }
    void getData(){
        cout<<"The id of the item is "<<item_id<<endl;
        cout<<"The price of the item is "<<item_price<<endl;
    }
};

int main()
{
    int p ;
    float q;
    shop_item* ptr = new shop_item[4];
    // dynamically allocates memory for 4 objects of class shop_item and returns pointer to 
    // the first object of the class, which is assign to ptr here (a pointer)
    shop_item*ptrTemp = ptr;
//     1 2 3 4
//     ^
//     |
//     |
//    ptr // This is situation before first loop
//   ptrTemp
    for(int i=0; i<4; i++){
        cout<<"Enter the id and price of the item "<<i+1<<endl;
        cin>>p>>q;
        ptr->setData(p,q);
        ptr++;
    }
    cout<<endl;
//     1 2 3 4
//     ^     ^
//     |     |
//     |     |
//     |    ptr // This is situation after first loop
//   ptrTemp
    for(int j=0; j<4; j++){
        cout<<"The id and price of the item "<<j+1<<" is :"<<endl;
        ptrTemp->getData();
        cout<<endl;
        ptrTemp++;
    }

    delete[] ptr;
     return 0;
}