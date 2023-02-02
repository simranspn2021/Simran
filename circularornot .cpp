//time complexity is o(n)
#include<iostream>
using namespace std;
class node 
{
    public:
    int data;
    node * next;
    node(int data)
    {
this->data=data;
this->next=NULL;
    }
    ~node()
    {
        int value=this->data;
        if(this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
    }
};
void insertathead(node* &head,int data)
{
node* newnode=new node(data);
newnode->next=head;
head=newnode;

}

void print(node * &head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
}
bool isCircularList(node* head)
{
    if(head==NULL)
    return true;
node* temp=head->next;
while(temp!=NULL && temp!=head)
{
    temp=temp->next;
}
if(temp==NULL)
{
    return false;
}
else{
    return true;
}
}
int main()
{
//     node * node1=new node(23);
 node* head=NULL;//for no node it return true 
//    insertathead(head,12);
//    insertathead(head,45);
   if(isCircularList(head))
   {
    cout<<"linked list is circular list in nature ";
   }
   else{
    cout<<"linked list is not circular ";
   }
    return 0;
}
//another approach is we can use the map to store thr key value pairs and thenode is traversing 
//storing the bool as value if the node is visisted then true as false.
