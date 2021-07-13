#include<bits/stdc++.h>
using namespace std;
int getmin(vector<int> v)
{
    int min=pow(10,5);
    for(int i=0;i<v.size();i++)
    {
        if(v[i]<min)
        {
            min=v[i];
        }
    }
    return min;
}
int main()
{
    int t,n,inp,count,b=0;
    cin>>t;
    vector<int> v;
    while (t--)
    {
        cin>>n;
        count=0,b=0;
        for(int i=0;i<n;i++)
        {
            cin>>inp;
            v.push_back(inp);
        }
        int min=getmin(v);
        for(int i=0;i<min+1;i++)
        {
        
            for(int j=0;j<v.size();j++)
            {
                if(count>v[j])
                {
                    break;
                }
                else
                {
                    b++;
                }
                count=count+1;
            }
            
        }
        cout<<b<<"\n";
    }
    return 0;
    
}