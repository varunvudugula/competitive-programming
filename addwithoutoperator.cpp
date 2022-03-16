#include<bits/stdc++.h>
using namespace std;
int add(int a,int b)
{
    if(!b)
    return a;
    else
    {
        int sum=a^b;
        int carry=(a&b)<<1;
        return add(sum,carry);


    }
    
}
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<log(exp(n)*exp(m))<<" ";
    cout<<add(n,m)<<" ";
    if(n>0)
    {
        while(n>0)
        {
            m++;
            n--;
        }
        cout<<m<<" ";
    }
    else if(n<0) {
        while(n<0)
        {
            n++;
            m--;
        }
        cout<<m<<" ";
    }
    return 0;

}