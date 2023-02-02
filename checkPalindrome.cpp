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
int lengthlinkedlist(node* head)
{
    int count=0;
    node* temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;

}
// bool checkpalindrome(node* head,int n)
// {
// int arr[20];
// node* temp=head;
// int i=0;
// while(i<n and temp!=NULL)
// {
//     arr[i]=temp->data;
// i++;
// temp=temp->next;
// }
// //checking palindrome
// int low=0;
// int high=n-1;
// while(low<=high)
// {
//     if(arr[low]!=arr[high])
//     {
//         return 0;
//     }
//     low++;
//     high--;
// }
// return 1;
// }
// int main()
// {
//     node * node1=new node(1);
//     node* head=node1;
//     insertathead(head,2);
//     insertathead(head,0);
//     print(head);
//     int n=lengthlinkedlist(head);
//     if(checkpalindrome(head,n))
//     {
//         cout<<"yes it is palindrome";
//     }
//     else{
//         cout<<"no it is not palindrome";
//     }
//     return 0;
// }
//this approach will take time and space both o(n) hence it is not a good practice.
//2 approach:
//steps:1.Find middle 
//2.Now reverse the half list 
//3.now check the both sublists and compare their elemnts if it is not equal then it is not plainrome
//other approach program 
node* middle(node* head,int n)
{
    node* temp=head;
    int s=1;
    while(s<((n/2)+1))
    {
temp=temp->next;
        s++;
    }
    return temp;
}
node* reverse(node* &start)
{
    node* prev=NULL;
    node* curr=start;
    node* forward=NULL;
    while(curr!=NULL)
    {
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;


    }
    return prev;

}
bool checkpalindrome(node * head,int n)
{
    if(head==NULL ||head->next==NULL )
    {
        return true;
    }
    //step1: find middle 
    node* mid=middle(head,n);
    node * temp=mid->next;
    //step2: reverse the list from mid+1
    mid->next=reverse(temp);
    //step3: compare bot halves
    node* head1=head;
    node* head2=mid->next;
    while(head2!=NULL)
    {
        if(head1->data!=head2->data)
        {
            return false;
     }
     head1=head1->next;
     head2=head2->next;
    }
    //now again reverse the list for origial list
    temp=mid->next;
    mid->next=reverse(temp);
        return true;

}
int main()
{
    node * node1=new node(1);
    node* head=node1;
    insertathead(head,2);
    insertathead(head,0);
    print(head);
    int n=lengthlinkedlist(head);
    if(checkpalindrome(head,n))
    {
        cout<<"yes it is palindrome";
    }
    else{
        cout<<"no it is not palindrome";
    }
    return 0;
}

