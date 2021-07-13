#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> v)
{
    vector<string> result;
    string s;
    vector<int> init(v.size(),1);
    int count=0,k;
    for(int i=v.size()-1;i>=0;i--)
    {
        if(v[i]!=init[i])
        {
            bool t=true;
            while(t)
            {
                if(v[i]>init[i])
                {
                    init[i]=init[i]*2;
                    s="1 "+to_string(i+1);
                    result.push_back(s);
                    count++;
                    if(init[i]==v[i])
                    {
                        t=false;
                    }
                }
                
                else
                {
                    for(k=0;k<v.size();k++)
                    {
                        if(init[i]-init[k]==v[i])
                        {
                           s="2 "+to_string((i+1))+" "+to_string((k+1));
                           result.push_back(s);
                            count++;
                            t=false;
                            break;
                        }
                    }

                }
            }
        }
    }
    cout<<count<<"\n";
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<"\n";
    }
}
int main()
{
    int n,inp;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>inp;
        v.push_back(inp);
    }
    solve(v);
}