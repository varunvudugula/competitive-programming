#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,inp,temp,count;
    cin>>t;
    vector<int> v;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>inp;
            v.push_back(inp);
        }
        sort(v.begin(),v.end());
         temp=v[0],count=1;
        for(int i=1;i<v.size();i++)
        {
            
            if(v[i]==temp)
            {
                count++;
            }
            else if((v[i]!=temp)&&(count%2!=0))
            {
                cout<<v[i]<<"\n";
                break;
            }
            else
            {
                temp=v[i];
                count=1;
            }
            cout<<temp<<" "<<count<<"\n";
        }
        v.clear();
    
    }
    return 0;
    
}