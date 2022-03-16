#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int res=0;
    while(b>0)
    {
        if(b&1)
        res=res+a;


        a=a<<1;
        b=b>>1;
        cout<<res<<" "<<a<<" "<<b<<"\n";
    }
    cout<<res<<"\n";
    return 0;
}