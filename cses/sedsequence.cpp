#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,input,sum=0;
    cin>>t;
    while(t--)
    {
        sum=0;
        vector<int> v;
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            cin>>input;
            v.push_back(input);
        }
        for(int i=0;i<n;i++)
        {
            sum+=v[i];
        }
        if(sum%k==0)
        {
            cout<<"0"<<"\n";
        }
        else
        {
            for(int j=0;j<k;j++)
            {
                if((sum+j)%k==0)
                {
                    v[0]=v[0]+j;
                    cout<<"1"<<"\n";
                    break;
                }
            }
        }
        
        
    }
    return 0;
}
