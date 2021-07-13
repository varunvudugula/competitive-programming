#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,inp,consec,ones;
    cin>>t;
    vector<string> v;
    string s;
    while(t--)
    {
        cin>>n>>m;
        ones=0;
        consec=0;
        for(int i=0;i<n;i++)
        {
            cin>>s;
            v.push_back(s);
        }
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               if(i!=0&&j!=0&&i!=n-1&&j!=m-1)
               {
                    if(v[i][j]=='1'&&v[i][j+1]=='0'&&v[i+1][j]=='0'&&v[i-1][j]=='0'&&v[i][j-1]=='0')
                    ones+=1;
               }
               else if(v[i][j]=='1'&&i==0&&j==0)
               {
                   if(v[i][j+1]=='0'&&v[i+1][j]=='0')
                   ones+=1;
               }
               else if(v[i][j]=='1'&&(i==n-1&&j==m-1))
               {
                   if(v[i][j-1]=='0'&&v[i-1][j]=='0')
                   ones+=1;
               }
               else if(v[i][j]=='1'&&i==n-1&&j==0)
               {
                   if(v[i-1][j]=='0'&&v[i][j+1]=='0')
                   ones+=1;
               }
               else if(v[i][j]=='1'&&i==0&&j==n-1)
               {
                   if(v[i+1][j]=='0'&&v[i][j-1]=='0')
                   ones+=1;
               }
           }
       }
        if(ones==0)
        cout<<"0\n";
        else
        cout<<ones/2<<"\n";
        v.clear();
    }
    return 0;
}