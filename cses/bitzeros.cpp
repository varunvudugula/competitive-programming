#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    long long sum=pow(2,n);
    sum=((sum%mod));
    cout<<fixed<<sum<<"\n";
    return 0;
}