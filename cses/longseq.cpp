#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    while(n--)
    {
        cin>>s;
        int result=0;
        char flag=s[0];
        for(int i=1;i<s.size();i++)
        {
            if(s[i]!=flag)
            {
                result=1;
                break;
            }
        }
        if(result==1)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }


    }
    return 0;
}
