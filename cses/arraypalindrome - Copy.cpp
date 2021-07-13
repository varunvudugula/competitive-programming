#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,inp,stat=0;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>inp;
        v.push_back(inp);
    }
    int j=v.size()-1;
    for(int i=0;i<j;i++)
    {
        if(v[i]!=v[j])
        {
            stat=1;
            break;
        }
        j--;
    }
    if(stat==1)
    {
        cout<<"\nnot array palindrome:";
    }
    else{
        cout<<"\n array palindrome:";
    }
    return 0;
}