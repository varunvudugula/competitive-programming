#include<bits/stdc++.h>
using namespace std;
void dfs(int node,vector<int> adj[],vector<int> &vis,vector<int> &res)
{
        vis[node]=1;
        res.push_back(node);
        for(auto it:adj[node])
        {
            dfs(it,adj,vis,res);
        }
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
    vector<int> vis(n+1,0);
    vector<int> res;
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        dfs(i,adj,vis,res);
    }
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }

    return 0;
}
