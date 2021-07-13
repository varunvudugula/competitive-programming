#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    long long maxi=0;
    cin>>s;
    for(long long i=0;i<s.length()-1;i++)
    {
        for(long long j=i+1;j<s.length();j++)
        {
            if(s[i]!=s[j])
            {
        
                maxi=max(abs(i-j),maxi);

            }
        }
    }
    cout<<maxi<<"\n";
    return 0;
}