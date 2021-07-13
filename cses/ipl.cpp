
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,stat;
    long long count;
    string s;
    cin>>t;
    while(t--)
    {
        count=0;
        stat=0;
        cin>>n;
        cin>>s;
        for(long long i=0;i<s.size();i++)
        {
            //cout<<s[i]<<" ";
            if(s[i]=='1')
            {
                count++;
            } 
           //int var=(count*100)/(i+1);
            //cout<<"*"<<var<<" "; 
            if(((count*2)>=(i+1)))
            {
                stat=1;
                break;
            } 
        }  
        if(stat==0)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }
    return 0;
}