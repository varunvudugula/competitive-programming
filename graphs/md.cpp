

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,f,x;
    cin>>n>>f;
    cout<<n<<f;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    vector<int> res;
    res.push_back(f);
    for(int i=0;i<n;i++)
    {
        cout<<(res[i]^v[i])<<" *\n";
        res.push_back(res[i]^v[i]);
    }
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
    
    

    return 0;
}