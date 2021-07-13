#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
long long power(long long a, long long b,long long n)
{
    long long res=1;
    while(b>0)
    {
        if((b&1)!=0)
        {
            res=(res*a%n)%n;
        }
        a=(a%n*a%n)%n;
        b=b>>1;
    }
    return res;

}
int main()
{
    int t,n;
    cin>>t;
   long long count;
    while(t--)
    {
        cin>>n;
        count=power(2,(n-1),1000000007);
        cout<<count<<"\n";   
    }
    return 0;
}