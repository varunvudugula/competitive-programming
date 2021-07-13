#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,as,bs,res=0,fail=0,ans;
    cin>>t;
    string s;
    while(t--)
    {
        res=0;
        as=0;
        bs=0;
        cin>>n;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if((i+1)%2==0&&s[i]=='1')
            {
                bs+=1;
            }
            else{
                if(s[i]=='1')
                as+=1;
            }
            if((i+1)%2==0&&abs(as-bs)>(2*n-(i+1))/2)
            {
                res=1;
                cout<<i+1<<"\n";
                break;
            }
            
        }
        if(res==0)
        {
            cout<<2*n<<"\n";
        }
    }

    return 0;
}