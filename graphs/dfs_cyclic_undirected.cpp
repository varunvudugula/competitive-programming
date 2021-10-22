#include<bits/stdc++.h>
using namespace std;
bool cfc(int node,int parent,vector<int> adj[],vector<int> &vis)
{
    vis[node]=1;
    for(auto it: adj[node])
    {
        if(!vis[it])
        {
            if(cfc(it,node,adj,vis))
            return true;
        }
        else if(it!=parent)
        return true;
    }
    return false;
}
bool cfcm(int n ,vector<int> adj[])
{
    vector<int> vis(n+1,0);
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
            if(cfc(i,-1,adj,vis))
            return true;
        }
    }
    return false;
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    
    cout<<cfcm(n,adj);
    
    return 0;
}