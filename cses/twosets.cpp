#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
long long n,total;
cin>>n;
total=n*(n+1)/2;
if(total & 1)
{
    cout<<"NO\n";
}
else
{
    cout<<"YES\n";
    vector<long long > v1,v2;
    total/=2LL;
    while(n)
    {
        if(total-n>=0)
        {
            v1.push_back(n);
            total-=n;
        }
        else
        {
            v2.push_back(n);
        }
        n--;
    }
    cout<<v1.size()<<"\n";
    for(long long i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<"\n";
    cout<<v2.size()<<"\n";
    for(long long i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<"\n";

}
return 0;
}