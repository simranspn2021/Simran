#include<iostream>
using namespace std;
class simran 
{
    public :
    int age;
    int marks;
    static string college;//copy constructor 
    // simran(simran& temp){
    //     cout<<"copy constructor called"<<endl;
    // this->age=temp.age;
    // this->marks=temp.marks;
    // }
    static string print()
    {
        return college;
    }
    simran()
    {
        cout<<"default constructor called";
    }
    ~simran()
    {
        cout<<"destructor called";
    }
    // simran(int age)
    // {
    //     cout<<"constructor called";
    //     this->age=age;//this is the pointer store the address of current object 
    // cout<<"printing this pointer"<<this<<endl;}
};
//we have to initialize outside the class
string simran::college="chandigarh University";
int main()
{
    cout<<simran::college<<endl;
    //we can use static keyword to access the variable without actually creating the object 
cout<<simran::print();





//     simran s; 
//     s.age=23;
//     s.marks=90;
//copy constructor 
// simran o(s);
// cout<<s.age<<endl<<s.marks<<endl;
// cout<<o.age<<endl<<o.marks<<endl;

//shallow constructor=default copy constructor
// simran obj(s);
// cout<<"before changing the age of s"<<endl;
// cout<<s.age<<endl<<s.marks<<endl;
// cout<<obj.age<<endl<<obj.marks<<endl;
// cout<<"after changing the age of s"<<endl;
// s.age=54;
// cout<<s.age<<endl<<s.marks<<endl;
// cout<<obj.age<<endl<<obj.marks<<endl;
// simran obj;
// obj=s;//copy assignment operator
// cout<<obj.age<<endl<<obj.marks<<endl;
// simran *obj2=new simran;//dynamically creation of object
// delete obj2;//for dynamic object we have to caall the destructor manually by delete keyword.
return 0;



// simran s(23);//when it is created the constructor is automtaically called that is s.simran()
// // simran *obj=new simran;//simran *obj=new simran();
// cout<<&s<<endl;
// return 0;
}