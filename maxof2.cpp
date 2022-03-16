#include<bits/stdc++.h>
using namespace std;
int findmax(int a,int b)
{
    int z,i,max;
    z=a-b;
    cout<<(z>>31)<<" ";
    i=(z>>31)&1;
    cout<<i<<"\n";
    max=a-(i*z);
    return max;
}
int findmaxbool(int a, int b)
{
    return a*(bool)a/b+b*(bool)b/a;
}
int main()
{
    int a,b;
    cin>>a>>b;

    //cout<<(bool)a/b<<" "<<a*(bool)a/b<<"\n";
    //cout<<(bool)b/a<<" "<<b*(bool)b/a<<"\n";
    cout<<findmaxbool(a,b)<<"\n";
    cout<<findmax(a,b)<<"\n";
    return 0;
}