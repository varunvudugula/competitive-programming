#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,input;
    vector <int> v;
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        cin>>input;
        v.push_back(input);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<=n-1;i++)
    {
        if(i+1!=v[i])
        {
            cout<<i+1<<" ";
            break;
        }    
    }
    return 0;
}