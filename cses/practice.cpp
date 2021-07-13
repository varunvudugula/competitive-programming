#include<bits/stdc++.h>
using namespace std;
vector<char> v;
vector<int> q;
void decode(int i, int v)
{
    for(int j=0;j<q.size();j++)
    {
        for(int k=0;k<4;k++)
        {
            if(q[k]==0)
            decode(0,v.size()/2);
            if(q[k]==1)
            decode(v/)
        }
    }

}
int main()
{
    
    int n,input;
    cin>>n;
    for(int i=97;i<113;i++)
    {
        v.push_back(i);
    }
    for(int i=0;i<n;i++)
    {
        cin>>input;
        q.push_back(input);
    }
    decode(0,v.size());

}