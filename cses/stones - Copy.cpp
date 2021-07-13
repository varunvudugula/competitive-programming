#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,inp,mx=0,mn=1000000,set1=0,set2=0,mini,maxi,low,high;
    cin>>t;
    while(t--)
    {
        mx=0,mn=1000000,set1=-1,set2=-1,mini,maxi;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>inp;
        if(inp>mx)
        {
            mx=inp;
        }
        if(inp<mn)
        {
            mn=inp;
        }
        v.push_back(inp);
    }
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==mn)
        {
            mini=i;
        }
        else if(v[i]==mx)
        {
            maxi=i;
        }
    }
    if((abs(mini-0))<abs(mini-(n-1)))
    {
        set1=0;
        low=abs(mini-0);
    }
    else{
        set1=1;
        low=abs(mini-(n-1));
    }
    if(abs(maxi-low)<abs(maxi-(n-1)))
    {
        set2=0;
        high=abs(maxi-0);
    }
    else
    {
        set2=1;
        high=abs(maxi-(n-1));

    }
    if((set1==0)&&(set2==0)||((set1==1)&&(set2==1)))
    {
        cout<<max(low,high)+1<<"\n";
    }
    else{
        cout<<low+high+2<<"\n";
    }
    v.clear();

    }
    return 0;

}