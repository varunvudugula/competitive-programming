#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    char ch;
    int max=0,count=0;
    ch=s[0];
    count=1;
    for(int i=1;i<s.size();i++)
    {
        if(s[i]==ch)
        {
            count+=1;
        }
        else{
            if(count>max)
            {
                max=count;
            }
            ch=s[i];
            count=1;
        }

    }
    if(count>max)
    {
        max=count;
    }
    cout<<max<<"\n";
    return 0;
}