#include<bits/stdc++.h>
using namespace std;
bool cfc(int n,vector<int> adj[],vector<int> &vis)
{
    queue<pair<int,int>> q;
    q.push({0,-1});
    vis[0]=1;
    while(!q.empty())
    {
        int node=q.front().first;
        int prev=q.front().second;
        q.pop();
        for(auto it:adj[node])
        {
            if(!vis[it])
            {
                vis[it]=1;
                q.push({it,node});
            }
            else if(prev!=it)
            {
                return true;
            }
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
    vector<int> vis(n+1,0);
    cout<<cfc(n,adj,vis);
    
    return 0;
}
