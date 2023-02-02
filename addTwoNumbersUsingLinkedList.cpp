#include<iostream>
using namespace std;
class node 
{
    public:
    int data;
    node* next;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void insertathead(node* &head,int data)
{
    node* newnode=new node(data);
    newnode->next=head;
    head=newnode;
}
void print(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
    cout<<temp->data<<endl;
    temp=temp->next;
    }

}
int main()
{
    node * node1=new node(1);
    node* head=node1;
    insertathead(head,2);
    insertathead(head,0);
    
    return 0;
}