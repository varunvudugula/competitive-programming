#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,inp,max,count=0;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>inp;
        v.push_back(inp);
    }
    if(n==1)
    {
        cout<<"0\n";
    }
    else{
    sort(v.begin(),v.end());
    max=v[v.size()-1];
    for(int i=0;i<n;i++)
    {
        count+=max-v[i];
    }
    cout<<count<<"\n";
    }
    return 0;
}