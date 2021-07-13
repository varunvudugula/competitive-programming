#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n,input,v=0;
        vector<int> ma,na;
        set<int> res;
        res.insert(0);
        cin>>m>>n;
        for(int i=0;i<m;i++)
        {
            cin>>input;
            ma.push_back(input);
        }
        for(int j=0;j<n;j++)
        {
            cin>>input;
            na.push_back(input);
        }
        for(int i=0;i<ma.size();i++)
        {
            v=0|ma[i];
            res.insert(v);
        }
        for(int j=0;j<na.size();j++)
        {
            v=0&na[j];
            res.insert(v);
        }
        
        for(int i=0;i<ma.size();i++)
        {
            for(int j=0;j<ma.size();j++)
            {
                v=ma[i]|ma[j];
                res.insert(v);
            }
        }
        v=0;
        for(int j=0;j<na.size();j++)
        {
            for(int k=j+1;k<na.size();k++)
            {
                v=na[j]&na[k];
                res.insert(v);
            }    
        }
        for(auto x: res)
        {
            cout<<x<<" ";
        }
    }
    return 0;
}