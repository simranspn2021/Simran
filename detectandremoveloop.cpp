#include<iostream>
#include<map>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node(int data )
    {
        this->data=data;
        this->next=NULL;
    }

};
void print(node* &head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;

    }

}
bool detectACycle(node* head)
{
    if(head==NULL)
    {
        return false;
    }
    node* temp=head;
    map<node*,bool>visited;
    while(temp!=NULL)
    {
        if(visited[temp]==true)
        {
            cout<<"element at which cycle is present:"<<temp->data<<endl;
            return true;
        }
        visited[temp]=true;
        temp=temp->next;
    }
        return false;

}
node* floycdloop(node* head)
{
    if(head==NULL)
    return NULL;
    node* slow=head;
    node* fast=head;
    while(slow!=NULL and fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
        }
        slow=slow->next;
        if(slow==fast)
        {
            cout<<"cycle at data value:"<<slow->data;
            return slow;
        }
    }
    return NULL;
}
node* beginOfCycle(node* head)
{
    if(head==NULL)
    {
        return NULL;
    }
    node* startnode=floycdloop(head);
    node*slow=head;
    while(slow!=startnode)
    {
        slow=slow->next;
        startnode=startnode->next;
    }
    return slow;
}
//removing the cycle from the linkedlist 
void removeLoop(node* head)
{
    if(head==NULL)
    return;
    node* startOfLoop=beginOfCycle(head);
    node* temp=startOfLoop;
    while(temp->next!=startOfLoop)
    {
        temp=temp->next;
    }
    temp->next=NULL;
}
// int main()
// {
//     node * node1=new node(45);
//     node * head=node1;
//     node*node2=new node(90);
//     head->next=node2;
//     node* node3=new node(89);
//     node2->next=node3;
//     node* node4=new node(11);
//     node3->next=node4; 
//     node4->next=node3;
//     if(detectACycle(head))
//     {
//         cout<<"Cycle is present in the list";
//     }
//     else 
//     {
//         cout<<"Cycle is not present in the list";
//     }
//     // print(head);-->infinite loop
//        return 0;
// }
//approach 2->Floycd cycle detection algorithm 
//This algorithm will help you to detect cycle by two pointer approach that is slow and fast
//when they meet it means there is a cycle
int main()
{
    node * node1=new node(45);
    node * head=node1;
    node*node2=new node(90);
    head->next=node2;
    node* node3=new node(89);
    node2->next=node3;
    node* node4=new node(11);
    node3->next=node4; 
    node4->next=node3;
    if(floycdloop(head))
    {
        cout<<"Cycle is present in the list";
    }
    else 
    {
        cout<<"Cycle is not present in the list";
    }
    // }
    // node* beginOfLoop=beginOfCycle(head);
    // cout<<"loop beginning is at:"<<beginOfLoop->data;
    // print(head);-->infinite loop
removeLoop(head);
print(head);      
 return 0;
}