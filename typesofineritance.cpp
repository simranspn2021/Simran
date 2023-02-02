#include<iostream>
using namespace std;
//1.example of single ineritance:
// class animal 
// {
//     public :
//     int age=23;
// };
// class dog:public animal
// {
// public :
// void print()
// {
// cout<<"dog age is :"<<age<<endl;
// }
// };
// int main()
// {
// dog obj;
// obj.print();
//     return 0;
// }
//2.example of multilevel 
// class animal 
// {
//     public:
//     int age=0;
// };
// class dog:public animal {
//     public:
//     void setage(int age )
//     {
//         this->age=age;
//     }
// };
// class cat:public dog{
//     public:
//     void print()
//     {
//         cout<<"dog age is "<<age<<endl;
//     }
// };
// int main()
// {
//     cat obj;
//     obj.setage(90);
//     obj.print();
//     return 0;
// }
//3.example of multiple ineritance 
// class human 
// {
// public:
// void speak()
// {
//     cout<<"i am speaking";
// }
// };
// class bird
// {
//     public:
//     void chirp()
//     {
//         cout<<"i am chirping";
//     }
// };
// class both:public human,public bird{

// };
// int main()
// {
//     both b;
//     b.speak();
//     b.chirp();
//     return 0;
// }
//4.example of hierarcial ineritance 
// class a
// {
//     public:
//     int a;
// };
// class b:public a
// {
//     public:
//     int b;
// };
// class c:public a
// {
//     public:
//     int c;
// };
// int main()
// {
//     b obj;
//     obj.a=23;
//     cout<<obj.a;
// }
//5.hybrid-combination of more than one type of ineritance (hierarcial+multiple)
//in case of multiple inheritance if we have one class inheriant the two classes and the 
//name of the function is same in bot the classes (parent) then child class object 
//will call which function this is the inheritance ambiguity
//for this problem we can use scope resolution operator 
//exxample:
class a
{
    public:
    void func()
    {
        cout<<"hello"<<endl;
    }
};
class b
{
    public:
    void func()
    {
        cout<<"hi"<<endl;
    }
};
class c:public a,public b
{

};
int main()
{
    c obj;
    //obj.func();//error 
//we can write
obj.a::func();
obj.b::func();
return 0;
}