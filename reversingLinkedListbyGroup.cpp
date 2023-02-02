#include<iostream>
using namespace std;
class node{
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
void print(node* &head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
node* reverseknode(node* head,int k)
{
    if(head==NULL)
    {
        return NULL;
    }
      int count=0;
      node* prev=NULL;
      node* curr=head;
      node* forward=NULL;
      while (curr!=NULL and count<k)
      {
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        count++;
      }
      if(forward!=NULL)
      {
      head->next=reverseknode(forward,k);
      }
      return prev;
}
int main()
{
    node* node1=new node(12);
    node* head=node1;
    insertathead(head,11);
    insertathead(head,89);
    insertathead(head,2);
    print(head);
    head=reverseknode(head,2);
    print(head);
    return 0;
}