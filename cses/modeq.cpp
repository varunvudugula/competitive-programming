#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,b,n,m,y,a,count;
    cin>>t;
    while(t--)
    {
        count=0;
        cin>>n>>m;
        b=n;
        vector<long long> mod(n+1,1);
        for(long long i=2;i<=n;i++)
        {
            y=m%i;
            count+=mod[y];
            for(long long j=y;j<=n;j+=i)
            {
                mod[j]++;
            }
            cout<<"y: "<<y<<"\n"<<"count: "<<count<<"\n";
            for(long long i=0;i<mod.size();i++)
            {
                cout<<mod[i]<<" ";
            }
        }
        cout<<"\n"<<count<<"\n";

    }
     return 0;
}