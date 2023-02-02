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
void print(node* &head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
void insertathead(node* &head,int data)
{
    node* newnode=new node(data);
    newnode->next=head;
    head=newnode;
}
void reverse(node* &head,node* prev,node*curr)
{
    if(curr==NULL)
    {
        head=prev;
        return;
    }
    node*forward=curr->next;
    reverse(head,curr,forward);
    curr->next=prev;

}
int main()
{
    node* node1=new node(45);
    node* head=node1;
    insertathead(head,67);
    insertathead(head,89);
    insertathead(head,21);
    insertathead(head,99);
    print(head);
    node*prev=NULL;
    node*curr=head;
    reverse(head,prev,curr);
    cout<<"After revsering the linked list:"<<endl;
    print(head);
       return 0;
}