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
void insertattail(node* &tail,int data)
{
    node * newnode=new node(data);
    tail->next=newnode;
    tail=newnode;
}
void insertAtPosition(node* &tail,node* &head,int position,int data)
{
    //we can have situation where we can insert at the 1 poisition then 
    if(position==1)
    {
        insertathead(head,data);
        return;
    }
    node *temp=head;
    int cnt=1;
    while(cnt<position-1)

    {
        temp=temp->next;
        cnt++;
    }
    // if(temp->next== NULL)
    // {
    //     insertattail(tail,data);
    //     return ;
    // }
    node *nodetoinsert=new node(data);//always connect the right node first then left node
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;
}
void deletenode(node* &head,int position)
{
    if(position==1)
    {
        node*temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;

    }
    else 
    {
        node *prev=NULL;
        node*curr=head;
        int cnt=1;
        while(cnt<position)
        {
             prev=curr;
             curr=curr->next;
                        cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
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
int main()
{
    node * node1=new node(23);
    // node*head=node1;
    // insertathead(head,45);
    // insertathead(head,90);
    // print(head);
    //for printing on the last
    node *head=node1;
node * tail=node1;
    insertattail(tail,45);
    insertattail(tail,90);
    insertattail(tail,89);
//     print(head);
//     cout<<"now inserting 34 at 3 position";
// insertAtPosition(tail,head,3,34);
// print(head);
// cout<<"now inserting 11 at first posiiton";
// insertAtPosition(tail,head,1,11);
// print(head);
// cout<<"now inserting at last posiition";
// insertAtPosition(tail,head,5,56);
//     print(head);
//now deleting the node 
deletenode(head,1);
print(head);
    return 0;
}