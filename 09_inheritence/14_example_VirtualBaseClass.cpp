// Example ....!!!!
// class Test and class Sport are derived from class Student ...
// class Result is derived from class Test and class Sport .....

// first of all we have to make our class Student as virtual base class .....
// for avoid ambiguity .....

#include<iostream>
using namespace std ;

class Student {
    protected:
    int roll_number ;
    public:
    void set_roll_number(int r){
        roll_number = r;
    }
    void get_roll_number(){
        cout<<"Your roll number is "<<roll_number<<endl;
    }
};

class Test : virtual public Student{
    protected:
    float maths, physics;
    public:
    void set_marks(float m1, float m2){
        maths = m1;
        physics =m2;
    }
    void get_marks(){
        cout<<"Your result is here...."<<endl;
        cout<<"maths = "<<maths<<endl
            <<"physics = "<<physics<<endl; 
    }
};

class Sport : virtual public Student{
    protected:
    int PTscore;
    public:
    void set_PTscore(float s){
        PTscore = s;
    }
    void get_PTscore(){
        cout<<"PTscore = "<<PTscore<<endl;
    }
};

class Result : public Test , public Sport {
    private:
    float Total;
    public:
    void total(){
        Total = (physics + maths + PTscore);
    }
    void Show_Result(){
        get_roll_number();
        get_marks();
        get_PTscore();
        cout<<"Your Total score is ....."<<Total<<endl;
    }
};

int main()
{
    Result R1;
    R1.set_roll_number(101);
    R1.set_marks(93.5, 97.0);
    R1.set_PTscore(50);
    R1.total();
    R1.Show_Result();
    return 0;
}