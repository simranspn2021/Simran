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
//Approach 1:this is the solution of data replacement 

// node* sortZeroOnesTwos(node* head)
// {
//     node* temp=head;
//     int zerocount=0;
//     int onecount=0;
//     int twocount=0;
//     while(temp!=NULL)
//     {
//         if(temp->data==0)
//         {
//             zerocount++;
//         }
//         else if(temp->data==1)
//         {
//             onecount++;
//         }
//         else 
//         {
//             twocount++;
//         }
//         temp=temp->next;
//     }
//     temp=head;
//     while(temp!=NULL)
//     {
//         if(zerocount!=0)
//         {
//             temp->data=0;
//             zerocount--;
//         }
//         else if(onecount!=0)
//         {
//             temp->data=1;
//             onecount--;
//         }
//         else{
//             temp->data=2;
//             twocount--;
//         }
//         temp=temp->next;
//     }
// return head;

// }
//Approach 2:if data is not to be replaced then another approach is :

void insertathead(node* &head,int data)
{
    node* newnode=new node(data);
    newnode->next=head;
    head=newnode;
}
int main()
{
    node* node1=new node(0);
    node* head=node1;
    insertathead(head,1);
    insertathead(head,1);
    insertathead(head,0);
    insertathead(head,2);
    // print(head);
    head=sortZeroOnesTwos(head);
    print(head);
       return 0;
}