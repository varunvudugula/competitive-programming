#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    struct node *next;
};
//check whether given linked list is circular or not
node* reverseBetween(node* head, int left, int right) {
        if(head==NULL)
            return NULL;
        else if(left==right)
            return head;
        int t=1;
        node *temp=head,*slow=NULL;
        while(left>1)
        {
            slow=temp;
            temp=temp->next;
            left--;
            right--;
        }
        node *prev=NULL,*n,*tr=temp;
        while(right>0)
        {
            n=temp->next;
            temp->next=prev;
            prev=temp;
            temp=n;
            right--;
        }
        if(slow!=NULL)
        slow->next=prev;
        else
           head=prev;
        tr->next=temp;
        return head;
    }
void isCircular(node *root)
{
    node *t=root->next;

    while(t!=NULL&&t!=root)
    {
        t=t->next;
    }
    //cout<<t->data<<"\n";
    if(t==root)
    {
        cout<<"circular\n";
    }
    else{
        cout<<"not a circular linked list\n";
    }
}
// to detect whether  linkedlist has cycle or not 
void hasCycle(node *root)
{
    int status=0;
    if(root==NULL)
    {
        cout<<"\n no cycle";
    }
    else{
        node *first=root,*second=root;
        while(second!=NULL&&second->next!=NULL)
        {
            
            first=first->next;
            second=second->next->next;
            if(first==second)
            {
                status=1;
            }
        }
    }
    if(status==1)
    {
        cout<<"Has Cycle";
    }
    else{
        cout<<"No Cycle";
    }
}
void display(node *root)
{
    while(root!=NULL)
    {
        cout<<root->data<<"->";
        root=root->next;
    }
    cout<<"NULL\n";
}
//to print reverse of linked list
void reverse(node **root)
{
    node *temp=*root;
    node *prev=NULL;
    while(temp!=NULL)
    {
        node *n=temp->next;
        temp->next=prev;
        prev=temp;
        temp=n;
    }
    *root=prev;
    cout<<"reverse of linkedlist ";
    display(*root);
}
//if linked list is 1->2->3->4->5->6   it will be printed as 1->6->2->5->3->4
void spiral(node **head)
{
    cout<<"spiral funciton called:\n";
    node *temp=*head;
    int count=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    cout<<"count of total elements"<<count<<"\n";
    int c=1;
    temp=*head;
    node *prev=new node();
    while(c<=count/2)
    {
        prev=temp;
        temp=temp->next;
        cout<<"split\n";
        c++;
    }
    prev->next=NULL;
    node *t=temp;
    cout<<t->data<<"\n";
    cout<<"\n displaying list";
    display(*head);
    cout<<"\n list after split:";
    display(t);
    reverse(&t);
    int i=1;
    temp=*head;
    while(i<=count)
    {
        if(i%2==0)
        {
            node *n=temp->next;
            temp->next=t;
            t=t->next;
            temp=temp->next;
            temp->next=n;
            temp=temp->next;
        }
        
        i++;
    }
    display(*head);

}
//check whether given linked list is palindrome is not
void palindrome(node *root)
{
    node *first=root,*second=root;
    while(second->next->next&&second->next)
    {
        first=first->next;
        second=second->next->next;
    }
    node *t2=first->next;
    first->next=NULL;
    node *t=root;
    display(t);
    display(t2);
    reverse(&t2);
    //display(t2);
    int status=1;
    while(t&&t2)
    {
        if(t->data!=t2->data)
        {
            status=0;
            break;
        }
        t=t->next;
        t2=t2->next;
    }
    if(status==1)
    {
        cout<<"Palindrome\n";
    }
    else{
        cout<<"Not Palindrome\n";
    }
}
//insert at begin
void insert(node **head,int data)
{
    cout<<"\n insert function called";
    node *n=new node();
    n->data=data;
    n->next=*head;
    *head=n;
}
//insert at end
void append(node **head,int data)
{
    node *n=new node();
    n->data=data;
    n->next=NULL;
    if(*head==NULL)
    {
        //*head=new node();
        //cout<<"inside if";
        *head=n;
        //cout<<"\n inside if"<<n->data;
        return;
    }
    else{
        node *temp=*head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=n;
    
    //cout<<"inserted";
    return ;
    }
}
//add two linked lists 
void add(node *h1,node *h2)
{
    reverse(&h1);
    reverse(&h2);
    node *res=new node();
    int carry=0;
    while(h1!=NULL&h2!=NULL)
    {
        append(&res,(h1->data+h2->data+carry)%10);
        if(h1->data+h2->data+carry>=10)
        {
            
            carry=1;
        }
        else{
            carry=0;
        }
        h1=h1->next;
        h2=h2->next;

    }
    while(h1)
    {
        append(&res,(h1->data+carry)%10);
        if(h1->data+carry>=10)
        {
            carry=1;
        }
        else
        {
            carry=0;
        }
    }
    while(h2)
    {
        append(&res,(h2->data+carry)%10);
        if(h2->data+carry>=10)
        {
            carry=1;
        }
        else
        {
            carry=0;
        }
    }
    display(res);

}
//merge two sorted lists 
node* mergeTwoLists(node* l1, node* l2) {
        if(l1==NULL)
            return l2;
        else if(l2 ==NULL)
            return l1;
        else
        {
            node* res;
            if(l1->data<l2->data)
            {
                res=l1;
                res->next=mergeTwoLists(l1->next,l2);
            }
            else
            {
                res=l2;
                res->next=mergeTwoLists(l1,l2->next);
            }
                    return res;
        }
    }
    // to sort the given linked list using merge sort logic
    node *merge(node *l1,node *l2)
    {
        if(!l1)
        return l2;
        if(!l2)
        return l1;
        node *res=NULL;
        if(l1->data<l2->data)
        {
            res=l1;
            res->next=merge(l1->next,l2);
        }
        else
        {
            res=l2;
            res->next=merge(l1,l2->next);
        }
        return res;

    }
    node* sortList(node *head)
    {
        if(!head||!head->next)
        {
            return head;
        }
        node *first=head,*second=head->next;
        while(second&&second->next)
        {
            first=first->next;
            second=second->next->next;
        } 
        node *left=head,*right=first->next;
        first->next=NULL;
        left=sortList(left);
        right=sortList(right);
        return merge(left,right);
    }
    void reverseat1(node **head)
    {
        node *temp=*head;
        node *t=*head;
        node *p;
        while(temp!=NULL)
        {
            if(temp->data==1)
            {
              p->next=NULL;
              reverse(&t);
              while(t!=NULL)
              {
                  t=t->next;
              }
              t->next=temp; 
            t=temp->next;
            }
            p=temp;
            temp=temp->next;
        }
        display(*head);
    }

int main()
{
    node *head=new node();
    head=NULL;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        append(&head,x);
    }
    display(head);
   /* node *head2=new node();
    head2=NULL;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        append(&head2,x);
    }
    display(head2);*/
    //reverse(&head);
    //spiral(&head);
    //isCircular(head);
   // hasCycle(head);
   //palindrome(head);
   //add(head,head2);
   //display(mergeTwoLists(head,head2));
   //display(sortList(head));
    reverseat1(&head);

    return 0;
}