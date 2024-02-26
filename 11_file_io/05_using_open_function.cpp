#include<iostream>
#include<fstream>
using namespace std ;

int main()
{   
    // opening the file using open() and write to it ....
    ofstream out;
    out.open("05_problem.txt");
    string name;
    cout<<"Enter your Name : "<<endl;
    cin>>name;
    out<<"My name is " + name <<endl;
    out<<"You are awesome brother."<<endl;
    out<<"Nice to meet you "<<endl;
    out.close();

    ifstream in;
    in.open("05_problem.txt");
    string line;
    while(in.eof()==0){
        getline(in , line);
        cout<<line<<endl;
    }
    in.close();
     return 0;
}