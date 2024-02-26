#include <iostream>
#include <fstream> // for using classes to working with the files ....
using namespace std;

int main()
{
    //opening files using constructor and write to it ...

    ofstream out("02_problem.txt");

    // creating a greet string and filling it with string entered by the user ...
    string greet;
    cout << "Enter your greet : " << endl;
    cin >> greet;

    //The string taken by the user .. Now write it to the file ....
    //out << greet << endl;

    // we can add some more string to the created string ...
    out<<greet + " Morning"<<endl; // Here + operator is used for adding two strings 

    // we can write strings or any number of lines to the files directly without creating string as used below...
    out << "My name is Lokesh Yadav" << endl;
    out << "and I am pursuing B.tech from J.K institute." << endl;
    return 0;
}