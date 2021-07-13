#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
 
 int count=0;   int t;
    long long int n;
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            if(i<=9)
            count++;
            else if(i>=10)
            {
                if(i%11==0)
                count++;
            }
        }
        cout<<count;
    }
    return 0;
}