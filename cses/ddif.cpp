#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,inp,count;
    cin>>t;
    vector<int> v;
    while(t--)
    {
        cin>>n;
        count=0;
        for(int i=0;i<n;i++)
        {
            cin>>inp;
            v.push_back(inp);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(v[j]-v[i]==j-i)
                {
                    count+=1;
                }
            }
        }
        cout<<count<<"\n";
        v.clear();

    }
}