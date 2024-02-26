#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count;

public:
    void setData();
    void getData();
    static void getCount();
};
// count is the static Data member of class employee.....
int employee::count;// initialisation of static data member... // Default value is 0;

void employee::setData()
{
    cout << "Enter the id of the item no. " << count + 1 << endl;
    cin >> id;
    count++;
}

void employee::getData()
{
    cout << "The id of the item no. " << count << " is " << id << endl;
}

void employee::getCount(){
    cout<<"Here the value of the count is ..."<<count<<endl;
}

int main()
{
    employee harry, rohan, lovish;
    // harry.id=101;
    // harry.count=1; can not do this as id and count are private ....
    employee::getCount();
    harry.setData();
    harry.getData();

    employee::getCount();
    rohan.setData();
    rohan.getData();

    employee::getCount();
    lovish.setData();
    lovish.getData();

    employee::getCount();
    return 0;
}