#include<bits/stdc++.h>
#define mod 10000000007
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,q;
    long long inp,sum=0;
    cin>>n;
    vector<long long> v,x;
    for(int i=0;i<n;i++)
    {
        cin>>inp;
        sum+=inp;
        sum=((sum%mod)+mod)%mod;
    }
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>inp;
        sum+=sum;
        sum=((sum%mod)+mod)%mod;
        cout<<sum<<"\n";
    }
    return 0;
}