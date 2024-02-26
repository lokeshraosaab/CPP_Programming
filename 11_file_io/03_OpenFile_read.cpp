#include<iostream>
#include<fstream>
using namespace std ;

int main()
{   
    // opening files using constructor and reding it ....

    ifstream in("02_problem.txt");
    string st, st1, st2, st3, st4, st5, st6, st7, st8, st9, st10, st11, st12, st13, st14, st15; 

    // // using " object_name >> string ; " as many as we can create strings and use this method as many as we can read words from the file ...
    // in>>st1;
    // in>>st2;
    // in>>st3;
    // in>>st4;
    // in>>st5;
    // in>>st6;
    // in>>st7;
    // in>>st8;
    // in>>st9;
    // in>>st10;
    // in>>st11;
    // in>>st12;
    // in>>st13;
    // in>>st14;
    // in>>st15;
    // cout<<st1<<" ";
    // cout<<st2<<endl;
    // cout<<st3<<" ";
    // cout<<st4<<" ";
    // cout<<st5<<" ";
    // cout<<st6<<" ";
    // cout<<st7<<endl;
    // cout<<st8<<" ";
    // cout<<st9<<" ";
    // cout<<st10<<" ";
    // cout<<st11<<" ";
    // cout<<st12<<" ";
    // cout<<st13<<" ";
    // cout<<st14<<" ";
    // cout<<st15<<" ";

    //But using getline(object_name , string); as many as we can create strings and and apply getline() as many as lines of the files we can read ....
    getline(in , st);
    cout<<st<<endl;
    getline(in , st);
    cout<<st<<endl;
    getline(in , st);
    cout<<st<<endl;

    // eof()
    // getline(object_name , st); returns eof() when all the string of the file have been read and afterthat we are using getline() ...
    getline(in , st);
    if(in.eof()){
        cout<<"Reading of the file is Done..."<<endl;
    }
    else{
        cout<<"Sorry you are reading file ... no eof() is generated..."<<endl;
    }
    
    // although... files will be automatically closed when we exit from the program ...
    // it is good practice ... we should close the file using member function close().....

    in.close(); // That shows we have done our work with the files ....

     return 0;
}