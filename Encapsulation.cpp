#include<iostream>
using namespace std;
//example of encapsulation were we cannot access the data members and it is only read only.
class simran 
{
    private:
    string name;
    int age;
    int height;
    public:
    void getdetails()
    {
        cout<<name<<endl<<age<<endl<<height<<endl;
    }
};
int main()
{
    simran o;
    o.getdetails();
    return 0;
}