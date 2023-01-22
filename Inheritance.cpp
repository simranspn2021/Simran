#include<iostream>
using namespace std;
class Human 
{
    protected:
    int age;
    string name;
  
};
//inheriant class
class male:private Human
{
    public:
      void setage(int a)
    {
        this->age=a;
    }
    void setname(string name)
    {
        this->name=name;
    }
    void display()
    {
        cout<<age<<endl<<name;
    }
};
//access mode and access specifier 
//access specifier         access mode 
//1.private                  public (NA)
//2.private                  private (NA)
//3.private                  protected(NA)
//4.public                   public     ----->public
//5.public                    private--------->private
//6.public                    protected---->protected
//7.protected                  public---->protected 
//8.protected                   private---->private
//9.protected                protected------>protected
int main()
{
  male obj;
  //cout<<obj.age;//not accessible outside te class 
  obj.setname("simran");  
obj.display();
    return 0;
}