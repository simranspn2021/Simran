#include<iostream>
using namespace std;
// class a
// {
//     public:
//     void add(int a,int b)
//     {
//         cout<<a+b;

//     }
//     void add(int a,int b,int c)//same function name but different paramteres 
//     {
//         cout<<a+b+c;
//     }
// };
// int main()
// {
//     a obj;
//     obj.add(23,34);
//     return 0;
// }
//2.Operator overloading
// class A
// {
//     public:
//     int a;
//     void operator+(A &obj)
//     {
// int value1=this->a;
// int value2=obj.a;
// cout<<value2-value1;
//     }
// };
// int main()
// {
//     A obj1,obj2;
//     obj1.a=23;
//     obj2.a=90;
//     obj1+obj2;//here first object will work as current object and this pointer will store the address of this object whereas obj2 will be working as input argument 

//     return 0;
// }
//Example of function overriding 
class A
{
    public:
    void speak()
    {
        cout<<"speaking ";
    }
};
class B:public A{
    public:
    void speak()
    {
        cout<<"barking ";
    }
};
int main()
{//in case we dont have the function named speak in B classs then it will display te parent class function 

    B obj;
    obj.speak();
    return 0;
}