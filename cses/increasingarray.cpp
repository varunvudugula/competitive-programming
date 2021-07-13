#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,inp,count=0,set;
    cin>>n;
    vector<long long> v;
    for(long long i=0;i<n;i++)
    {
        cin>>inp;
        v.push_back(inp);
    }
    //cout<<v[0]<<" ";
    for(long long i=1;i<n;i++)
    {
        if(v[i]<v[i-1])
        {
            set=v[i-1]-v[i];
            count+=set;
            v[i]+=set;
        }
      //  cout<<v[i]<<" ";
    }
    
    cout<<"\n"<<count<<"\n";
    return 0;

}