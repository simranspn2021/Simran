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
        // if(this->next!=NULL)
        // {
        //     delete next;
        //     this->next=NULL;
        // }
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

    node* curr =head;
    while(curr!=NULL)
    {
        if(curr->next!=NULL and curr->data==curr->next->data)
        {
        node* next_next=curr->next->next;
        node* node_delete=curr->next;
        delete(node_delete);
        curr->next=next_next;
        }
        else{
            curr=curr->next;
        }
    }
    return head;
}
int main()
{
    node * node1=new node(23);
    node *head=node1; 
    insertathead(head,90);
    insertathead(head,90);
    insertathead(head,98);
    insertathead(head,100);
    insertathead(head,102);
    insertathead(head,111);
print(head);
cout<<"after removing duplicates from sorted linkedlist";
head=remove(head);
print(head);
    return 0;
}