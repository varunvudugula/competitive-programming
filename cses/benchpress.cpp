#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,w,wr,inp,stat,temp,count=0;
    cin>>t;
    
    while(t--)
    {
        vector<int> v;
        stat=0;
        count=1;
        cin>>n>>w>>wr;
        for(int i=0;i<n;i++)
        {
            cin>>inp;
            v.push_back(inp);
        }
        if(w<wr)
        {
            stat=1;
        }
        else
        {
            w=w-wr;
            //cout<<w<<"\n";
            temp=v[0];
            sort(v.begin(),v.end());
            for(int i=1;i<v.size();i++)
            {
                if(w>0)
                {
                 if(v[i]==temp)
                    {
                        count++;
                        if(count==v.size())
                        {
                            w=w-(v.size()/2)*v[i];
                        }
                    }
                else
                {
                    w=w-(count/2)*v[i-1];
                    cout<<w<<"\n";
                    count=1;
                    temp=v[i];
                }
                }
                else
                {
                    if(w==0)
                    {
                        stat=1;
                        break;
                    }
                    else
                    {
                        stat=0;
                        break;
                    }
                }

                cout<<count<<"\n";
                
            }
        }
        if(w==0||stat==1)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
        v.clear();
    }

    return 0;
}