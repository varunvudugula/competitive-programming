#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,k,m,inp1,inp2,stat=0,temp;
    cin>>t;
    string s;
    while(t--)
    {  
        stat=1;
        temp=0;
        cin>>n; 
        for(int i=0;i<n;i++)
        {
            cin>>s;
            if(s=="start")
            {
                temp=1;
            }
            else if(s=="restart")
            {
                temp=1;
            }
            else if(s=="stop")
            {
                if(temp!=1)
                {
                    stat=0;
                }
                else{
                    temp=0;
                }
            }
        }
        if(stat==1)
        {
            cout<<"200\n";
        }
        else{
            cout<<"404\n";
        }
    }

    
    return 0;
}