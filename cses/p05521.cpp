#include<bits/stdc++.h>
using namespace std;
int check(vector<char> v,char ch)
{
    int stat=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==ch)
        {
            stat=1;
            return stat;
        }
    }
    return 0;
}
int main()
{
    int t,n,result,stat;
    string s;
    char ch;
    vector<char> vs;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        stat=0;
        vs.push_back(s[0]);
        for(int i=0;i<n-1;i++)
        {
            if(s[i]!=s[i+1])
            {
                result=check(vs,s[i+1]);
                if(result==1)
                {
                    stat=1;
                    break;
                }
                else{
                    vs.push_back(s[i+1]);
                }
            }
            
        }
        if(stat==1)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
        vs.clear();
    }
    return 0;
}