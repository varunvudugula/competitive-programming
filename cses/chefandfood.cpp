#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,big,max=0;
        vector<int> v1;
        int si,vi,pi;
        cin>>n;
        while(n--)
        {
            cin>>si>>vi>>pi;
            if(pi%(si+1)==0)
            {
                int a=0;
                a=pi/(si+1);
                a=a*vi;
                v1.push_back(a);
            }
            else
            {
                int b=0;
                b=pi/(si+1);
                b=b*vi;
                v1.push_back(b);
            }
            
            
        }
        cout<<*max_element(v1.begin(),v1.end())<<"\n";
    }
     
    return 0;
}