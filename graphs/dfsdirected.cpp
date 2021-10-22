//check whether graph conists of cycle using dfs
#include<bits/stdc++.h>

using namespace std;
bool cfc(int node,vector<int> adj[],vector<int> &vis,vector<int> &dfs)
{
    dfs[node]=1;
    vis[node]=1;
    for(auto it: adj[node])
    {
        if(!vis[it])
        {
            if(cfc(it,adj,vis,dfs))
            return true;
        }
        else if(dfs[it])
        {
            return true;
        }
    }
    return false;
}
bool cycle(int n , vector<int> adj[])
{
    vector<int> dfs(n+1,0);
    vector<int> vis(n+1,0);
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        if(cfc(i,adj,vis,dfs))
        return true;
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
    cout<<cycle(n,adj);
    
    return 0;
}