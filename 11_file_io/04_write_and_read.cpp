#include<iostream>
#include<fstream>
using namespace std ;

int main()
{
    // opening the file using constructor and write to it and reading from it .....

    // open file and write to it ......
    fstream writeout("04_problem.txt");
    writeout<<"Yes, I am okay"<<endl;
    writeout.close();
    
    // open file and reading from it ......
    fstream writein("04_problem.txt");
    string line1;
    getline(writein , line1);
    cout<<line1<<endl;
    writein.close() ;

    return 0;
}