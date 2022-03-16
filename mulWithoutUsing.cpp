//multiplication of two numbers without using *,/,%,bitwise and loops
#include<bits/stdc++.h>
using namespace std;
int multiply(int m,int n)
{
    cout<<m<<" "<<n<<"\n";
    if(n==0)
    return 0;
    else if(n>0)
    {
        //cout<<m+multiply(m,n-1)<<"*\n";
        return (m+multiply(m,n-1));
    }
    else if(n<0)
    
        return -multiply(m,-n);
    return 1;
}
int main()
{
    int a,b;
    cin>>a>>b;
    if(a<b)
    {
        cout<<multiply(b,a);
    }
    else
    {
        cout<<multiply(a,b);
    }
    return 0;
} 