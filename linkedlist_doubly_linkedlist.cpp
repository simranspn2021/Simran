#include<iostream>
using namespace std;
class node
{
public:
int data;
node* prev;
node* next;
node(int data )
{
    this->data=data;
    this->prev=NULL;
    this->next=NULL;
}
};
//traversing the node 
void print(node* &head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
//Finding the length of linkedlist 
int getlength(node* &head)
{
    int cnt=0;
    node* temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
cnt++;
    }
    return cnt;
}
//inserting from head
void insertathead(node* &head,int data)
{
node* newnode=new node(data);
newnode->next=head;
head->prev=newnode;
head=newnode;
}
void insertAtTail(node* &tail,int data )
{
node* newnode=new node(data);
tail->next=newnode;
newnode->prev=tail;
tail=newnode;

}

int main()
{
    node* node1=new node(45);
    // node* node2=new node(11);
    // node* node3=new node(56);
    // node* node4=new node(90);
node* head=node1;
node*tail=node1;
print(head);
int n=getlength(head);
cout<<"length of the linkedlist:"<<n<<endl;
cout<<"after inserting the elemnt 23 and 56 from the head"<<endl;
insertathead(head,23);
insertathead(head,56);
print(head);
cout<<"Now length of the linkedlist becomes:"<<getlength(head);
//now insertting at the end 
insertAtTail(tail,190);
print(head);
    return 0;
}