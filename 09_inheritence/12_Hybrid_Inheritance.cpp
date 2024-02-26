//     // Here we are giving a example of Hybrid inheritance ....
//     // But there is a ambiguity occuring in the Hybrid Inheritance .....
//     // so this program can not be run without solving ambiguity .... 

//     // class B and class C are drived from class A.....
//     // and class D is drived from class B and class C .....

// #include<iostream>
// using namespace std ;

// class A{
//     protected:
//     int a = 4;
//     public:
//     void getData(){
//         cout<<"a = "<<a<<endl;
//     }
// };

// class B : public A{

// };
// class C: public A{

// };

// class D : public B , public C{

// };

// int main()
// {
//     D d1;
//     d1.getData(); // Here we can easily observe a error due to ambiguity occuring of getData() 
//                   // as getData is now in both classes class B and class C as they are drived from class A....and 
//                   // class D is drived from class B and class C....
//      return 0;
// }

// // for solution of ambiguity let see the next program ...
// // with !!! virtual Base classes .....!!!