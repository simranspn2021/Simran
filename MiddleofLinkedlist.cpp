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
    node*newnode=new node(data);
    newnode->next=head;
    head=newnode;
}
int getlength(node* &head)
{
    node*temp=head;
    int cnt=0;
    while(temp!=NULL)
    {
        cnt++;
        temp=temp->next;
        
    }
    return cnt;
}
// void middle(node* head,int n)
// {
//     if(head==NULL || head->next==NULL)
//     {
//         cout<<head->data;
//     }
//     node* temp=head;
//     int pos=1;
//     while(pos<((n/2)+1) and temp!=NULL)
//     {
// temp=temp->next;
// pos++;
//     }
//     cout<<temp->data;
// }
//above will be done in o(n) times.
//optimized solution:
node* middle(node* head)
{
    if(head==NULL || head->next==NULL)
    {
 return head;
    }
    if(head->next->next==NULL)
    {
return head->next;
    }
    node* slow=head;
    node* fast=head->next;
    while( fast!=NULL)
    {
        fast=fast->next;
        if(fast !=NULL)
        { 
fast=fast->next;
        }
        slow=slow->next;
        
    }
return slow;

    
}
int main()
{
    node* node1=new node(90);
    node* head=node1;
    insertathead(head,88);
insertathead(head,81);
insertathead(head,82);
// insertathead(head,12);
int n=getlength(head);
node* mid=middle(head);
cout<<mid->data;
    return 0;
}