#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        bool c1=0,c2=0,c3=0,c4=0,c5=0;
        cin>>s;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>=97&&s[i]<=122)
            {
                c1=1;
            }
            if(s[i]>=65&&s[i]<=90)
            {
                c2=1;
            }
            if((s[i]==35)||(s[i]==38)||(s[i]==37)||(s[i]=63)||(s[i]==64))
            {
                c4=1;
            }
        }
        for(int i=0;i<s.length()-1;i++)
        {
            if(s[i]>='0'&&s[i]<='9')
            {
                c3=1;
            }
        }
        if(s.length()>=10)
        {
            c5=1;
        }
        if((c1==1)&&(c2==1)&&(c3==1)&&(c4==1)&&(c5==1))
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
        cout<<c1<<" "<<c2<<" "<<c3<<" "<<c4<<" "<<c5<<"\n";
        
    }
}