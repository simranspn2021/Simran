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
node*  remove(node* head)
{
    if(head==NULL)
    return NULL;

    node* curr=head;
    while(curr!=NULL and curr->next!=NULL)
    {
        node* temp=curr;
        while(temp->next!=NULL)
        {
            if(curr->data==temp->next->data)
            {
                node* deletednode=temp->next;
                temp->next=temp->next->next;
                delete deletednode;
            }
else
{
            temp=temp->next;}
            }
        curr=curr->next;
    }  
    return head;
}

int main()
{
    node * node1=new node(23);
    node *head=node1; 
    insertathead(head,90);
    insertathead(head,90);
    insertathead(head,9);
    insertathead(head,100);
    insertathead(head,10);
    insertathead(head,111);
// print(head);
// cout<<"after removing duplicates from unsorted linkedlist";
head=remove(head);
print(head);
    return 0;
}