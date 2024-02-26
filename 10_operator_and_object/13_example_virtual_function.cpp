#include<iostream>
#include<cstring>
using namespace std ;

class CWH{
     protected:
     string tittle;
     float rating;
     public:
     CWH(string s, float r){
          tittle = s;
          rating = r;
     }
    virtual void display(){}
};

class videotutorial : public CWH{
     float video_length;
     public:
     videotutorial(string s, float r, float vlen) : CWH(s,r){
       video_length = vlen;   
     }
     void display(){
          cout<<"The tittle of this video tutorial is : "<<tittle<<endl;
          cout<<"Ratings : "<<rating<<" out of 5 stars "<<endl;
          cout<<"The length of this video is "<<video_length<<" minutes "<<endl;
     }
};
class texttutorial : public CWH{
     int words;
     public:
     texttutorial(string s, float r, int wc) : CWH(s,r){
       words = wc;   
     }
     void display(){
          cout<<"The tittle of this text tutorial is : "<<tittle<<endl;
          cout<<"Ratings : "<<rating<<endl;
          cout<<"The words count of this text tutorial is "<<words<<" words."<<endl;
     }
};

int main()
{
    string tittle;
    float rating , video_length ;
    int words ;

    // for video tutorial ...
    tittle = "D'Jango Video" ;
    rating = 4.90 ;
    video_length = 30.45 ;
    CWH * ptr ;
    
    videotutorial dj_video(tittle , rating , video_length);
    //dj_video.display();
    ptr = &dj_video ;
    ptr -> display();
    cout<<endl;

     // for text tutorial ...
     tittle = "D'Jango text" ;
     rating = 4.7 ;
     words = 3500 ;
     texttutorial dj_text(tittle , rating, words) ;
     // dj_text.display() ;
     ptr = &dj_text ;
     ptr -> display() ;
     return 0;
}