#include<iostream>
using namespace std ;

class student {
    protected:
    int roll_number;
    public:
    void set_roll_number(int r);
    void get_roll_number();
};
void student :: set_roll_number(int r){
    roll_number = r;
}
void student :: get_roll_number(){
    cout<<"The roll number is "<<roll_number<<endl;
}

class exam : public student{
    protected:
    float maths;
    float physics;
    public:
    void set_marks(float m1, float m2);
    void get_marks();
};
void exam :: set_marks(float m1, float m2){
    maths = m1;
    physics = m2;
}
void exam :: get_marks(){
    cout<<"marks in maths : "<<maths<<endl;
    cout<<"marks in physics : "<<physics<<endl;
}

class result : public exam{
    protected:
    float percentage;
    public:
    void Cal_percentage(){
        percentage = (maths+physics)/2 ;
    }
    void display_result();
};
void result :: display_result(){
    get_roll_number();
    get_marks();
    Cal_percentage();
    cout<<"The result is "<<percentage<<"%"<<endl;
}

int main()
{
    result R1;
    R1.set_roll_number(100);
    R1.set_marks(92.0,93.5);
    R1.display_result();
     return 0;
}