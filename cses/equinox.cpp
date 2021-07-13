#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    long long a,b,as=0,bs=0;
    cin>>t;
    //vector<string> v;
    string s;
    char ch;
    while(t--)
    {
        as=0;
        bs=0;
        cin>>n>>a>>b;
        for(int i=0;i<n;i++)
        {
            cin>>s;
            ch=s[0];
            if(ch=='E'||ch=='Q'||ch=='U'||ch=='I'||ch=='N'||ch=='O'||ch=='X')
                as+=a;
            else
                bs+=b;
        }
        if(as>bs)
        {
            cout<<"SARTHAK\n";
        }
        else if(as<bs)
        {
            cout<<"ANURADHA\n";
        }
        else
        {
            cout<<"DRAW\n";
        }
        //v.clear();

    }
    return 0;
}