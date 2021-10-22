#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val)
    {
        data=val;
        left=right=NULL;
    }
};
void inprepost(Node *root)
{
    stack<pair<Node*,int>> st;
    vector<int> pre,pos,in;
    st.push({root,1});
    while(!st.empty())
    {
        auto it=st.top();
        st.pop();
        if(it.second==1)
        {
            pre.push_back(it.first->data);
            it.second++;
            st.push(it);
            if(it.first->left!=NULL)
                st.push({it.first->left,1});
        }
        else if(it.second==2)
        {
            in.push_back(it.first->data);
            
            it.second++;
            st.push(it);
            if(it.first->right!=NULL)
                st.push({it.first->right,1});
        }
        else{
            pos.push_back(it.first->data);
        }
    }
    for(int i=0;i<in.size();i++)
    {
        cout<<in[i]<<" ";
    }
    cout<<"inorder...\n";
    
    for(int i=0;i<pre.size();i++)
    {
        cout<<pre[i]<<" ";
    }
    cout<<"preorder...\n";
    
    for(int i=0;i<pos.size();i++)
    {
        cout<<pos[i]<<" ";
    }
    cout<<"postorder...\n";

}
int minDepth(Node *root) {
        if(root==NULL)
        return 0;
        if(root->left==NULL&&root->right==NULL)
        return 1;
        else
        {
            int l=1000000,r=1000000,c=0;
            if(root->left)
            l=minDepth(root->left);
            if(root->right)
            r=minDepth(root->right);
            c=1+min(l,r);
            return c;
        }
        return 0;
        // Your code here
    }
int height(struct Node* root)
{
    if(root==NULL)
    return 0;
    if(root->left==NULL&&root->right==NULL)
    return 1;
    else
    {
        int r=0,l=0,c;
        l=height(root->left);
        r=height(root->right);
        c=1+max(l,r);
        return c;
    }
    return 0;
}
int diameter(struct Node* root) {
    // code here
    if(root==NULL)
    return 0;
    int ld=diameter(root->left);
    int rd=diameter(root->right);
    return max(1+height(root->left)+height(root->right),max(ld,rd));
}
void mirror(struct Node* node) {
    // code here
    if(node==NULL)
    return;
    else
    {
        struct Node *temp;
        mirror(node->left);
        mirror(node->right);
        temp=node->left;
        node->left=node->right;
        node->right=temp;
    }
}
bool helper(struct Node* f, struct Node* s)
 {
     if(f==NULL&&s==NULL)
     return true;
     if(f==NULL||s==NULL)
     return false;
     return ((f->data==s->data)&&(helper(f->left,s->right))&&(helper(f->right,s->left)));
 }
bool isSymmetric(struct Node* root)
{
	// Code here
	return helper(root,root);
}
vector<vector<int>> levelorder(struct Node *root)
{
    vector<vector<int>> res;
    queue<Node*> q;
    if(root==NULL)
    return res;
    q.push(root);
    vector<int> t;
    while(!q.empty())
    {
        int c=q.size();
        while(c-->0)
        {
            Node *temp=q.front();
            q.pop();
            t.push_back(temp->data);
            if(temp->left!=NULL)
            q.push(temp->left);
            if(temp->right!=NULL)
            {
                q.push(temp->right);
            }

        }
        res.push_back(t);
        t.clear();

    }
    return res;


}
void inorder(struct Node *root)
{
    if(root==NULL)
    return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
vector<int> iterinor(struct Node *root)
{
    stack<Node*> st;
    vector<int> inorder;
    struct Node *node=root;
    while(true)
    {
        if(node!=NULL)
        {
            st.push(node);
            node=node->left;
        }
        else{
            if(st.empty())
            break;
            node=st.top();
            st.pop();
            inorder.push_back(node->data);
            node=node->right;
        }
    }
    return inorder;
}
vector<int> iterpre(struct Node *root){
    vector<int> res;
    stack<Node*> st;
    if(root==NULL)
    {
        return res;
    }
    st.push(root);
    while(!st.empty())
    {
        root=st.top();
        st.pop();
        res.push_back(root->data);
        if(root->right!=NULL)
        {
            st.push(root->right);
        }
        if(root->left!=NULL)
        {
            st.push(root->left);
        }
    }
    return res;

}
vector<int> iterpost2(struct Node *root)
{
    
    stack<Node*> st1,st2;

    vector<int> pos;
    if(root==NULL)
    return pos;
    st1.push(root);
    while(!st1.empty())
    {
        root=st1.top();
        st1.pop();
        st2.push(root);
        if(root->left)
        {
            st1.push(root->left);
        }
        if(root->right)
        {
            st1.push(root->right);
        }
    }
    while(!st2.empty())
    {
        pos.push_back(st2.top()->data);
        st2.pop();
    }
    return pos;
}
void preorder(struct Node *root)
{
    if(root==NULL)
    return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct Node *root)
{
    if(root==NULL)
    return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main()
{
 struct Node *root=new Node(1);
 root->left=new Node(2);
 root->right=new Node(3);
 root->left->left=new Node(4);
 root->left->right=new Node(5);
 root->right->left=new Node(6);
 root->right->right=new Node(7);
 /*inorder(root);
 cout<<"\n";
 
 cout<<"\n";
 postorder(root);
 cout<<"\n";
 vector<vector<int>> ans=levelorder(root);
 vector<int> res=iterpre(root);
 for(int i=0;i<res.size();i++)
 cout<<res[i]<<" ";
 cout<<"\n";
 for(int i=0;i<ans.size();i++)
 {
     for(int j=0;j<ans[i].size();j++)
     {
         cout<<ans[i][j]<<" ";
     }
     cout<<"\n";
 }*/
 //mirror(root);
 cout<<height(root)<<" height\n";
 cout<<diameter(root)<<" diameter\n";
 inprepost(root);
 cout<<"\npreorder\n";
 preorder(root);
 cout<<"\ninorder\n";
 inorder(root);
 vector<vector<int>> ans=levelorder(root);
 vector<int> res=iterpost2(root);
 cout<<"\npostorder\n";
 for(int i=0;i<res.size();i++)
 {
     cout<<res[i]<<" ";
 }
 cout<<"\n";
 for(int i=0;i<ans.size();i++)
 {
     for(int j=0;j<ans[i].size();j++)
     {
         cout<<ans[i][j]<<" ";
     }
     cout<<"\n";
 }
     return 0;
}