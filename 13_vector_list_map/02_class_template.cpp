#include<iostream>
using namespace std ;

//template<typename T> // This is also correct we can always replace 'typename' by 'class' 
template<class T>
class vector{
    public:
    T* arr;
    int size;
    vector(int a){
        size = a;
        arr = new T[size] ;
    }
    T dotProduct (vector &v){
        T d = 0;
        for(int i=0; i<size; i++){
            d += this-> arr[i] * v.arr[i] ;
        }
        return d;
    }

};

int main()
{
    vector<float>v1(3) ;
    v1.arr[0] = 1;
    v1.arr[1] = 2;
    v1.arr[2] = 3;
    vector<float>v2(3) ;
    v2.arr[0] = 4.7;
    v2.arr[1] = 0;
    v2.arr[2] = 1.5;
    float dotProduct = v1.dotProduct(v2);
    cout<<"The value of dot product of vectors v1 with v2 is "<<dotProduct<<endl;
     return 0;
}