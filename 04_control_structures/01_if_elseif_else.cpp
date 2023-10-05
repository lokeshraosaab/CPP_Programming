#include<iostream>
using namespace std ;

// Selection control structure if-elseif-else ladder .

int main()
{
int age;
cout<<"Enter your age: "<<endl;
cin>>age;

if(age<18 && age>0){
    cout<<"You are kid and you can't come to my party"<<endl;
}
else if(age==18){
    cout<<"Well , You have KID PASS , You can come"<<endl;
}
else if(age>18){
    cout<<"Yes , you can come to my party"<<endl;
}
else {
    cout<<"Sorry , You are not born yet"<<endl;
}
     return 0;
}