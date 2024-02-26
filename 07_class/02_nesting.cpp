#include<iostream>
#include<string>

using namespace std ;

class binary{
    private : 
    string s ;
    void check_binary();

    public:
    void read();
    void ones_complement();
    void display();
};

void binary::read(){
    cout<<"Enter your string ..."<<endl;
    cin>>s;
    check_binary();      // A member fuction can call another member fuction of the same class directly without 
                        // without using the dot operator . this is called nesting of member function.
}

void binary::check_binary(){
    for(int i=0; i<s.length(); i++){
        if((s.at(i)!='0') && (s.at(i)!='1') ){
                cout<<"Incorrect binary format"<<endl;
                exit(0); // program has been executed without any error or interrupt...
        }
    }
}

void binary::ones_complement(){
    for(int i=0; i<s.length(); i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }
}

void binary::display(){
    cout<<"Displaying your binary number..."<<endl;
    for(int i=0; i<s.length(); i++){
        cout<<s.at(i);
    }
    cout<<endl;

}

int main()
{
    binary b;
    b.read();
   // b.check_binary(); check_binary is private member fuction cannot be access by object with dot(.) operator
   // or cannot be access by functions outside the class...
   // but can be accessed by the member functions....
    b.display();
    b.ones_complement();
    cout<<"After ones_complement...."<<endl;
    b.display();

     return 0;
}