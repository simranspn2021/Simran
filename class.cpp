#include<iostream>
using namespace std;
class human 
{
    private:
    int health;
public:
    int value;
    int gethealth()
    {
        return health;
    }
    int getvalue()
    {
        return value;
    }
    void sethealth(int h)
    {
        health=h; 
    }
    void setvalue(int v)
    {
        value=v;
    }
};
int main()
{
    //static memory allocation of object
    // human ramesh;//object 
    //dynamically allocation of object
    human *ramesh=new human;
    // cout<<sizeof(human);
    //we can access the value by using dot operator
    // cout<<ramesh.health<<endl;
    // cout<<ramesh.value<<endl;//garbage value
    // ramesh.health=23;
    // ramesh.value=2;
    // cout<<ramesh.health<<endl<<ramesh.value<<endl;
    // return 0;
(*ramesh).sethealth(90);//defernece the value first 
cout<<(*ramesh).gethealth();
(*ramesh).setvalue(23);
cout<<(*ramesh).getvalue();
//or we can use arrow operator to access this 
cout<<ramesh->getvalue();
return 0;} 