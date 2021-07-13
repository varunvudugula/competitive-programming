#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    long long n,inp,sum;
   vector<long long> v;
    while(t--)
    {
        cin>>n;
        
        for(int i=0;i<n;i++)
        {
            cin>>inp;
            v.push_back(inp);
        }
        sum=v.size();
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i]<v[i+1])
            {
                sum+=1;
            }
        }
        cout<<sum<<"\n";
        v.clear();
    }
    return 0;
}