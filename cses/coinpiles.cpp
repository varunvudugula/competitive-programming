#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long m,n;
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        if((m+n)%3==0)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}