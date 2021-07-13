#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,inp,count=0,temp;
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
        temp=v[0];
        count++;
        for(int i=1;i<n;i++)
        {
            if(v[i]==temp)
            {
                count++;
            }
            else{
                if(count%2!=0)
                {
                    cout<<v[i]<<"\n";
                    break;
                }
                else{
                    count=1;
                    temp=v[i];
                }
            }


        }

    }
    return 0;
}