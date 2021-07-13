#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ind,indd,inp,max=0,maxd=0;
    vector<int> result;
    stack<char> st;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {
            st.push(s[i]);
        }
        else
        {
            st.pop();
            if(st.empty())
            result.push_back(i+1);
        }
        if(st.size()>max)
        {
            cout<<st.size()<<"s ";
            max=st.size();
            ind=i;
        }
    }
    for(int i=1;i<result.size();i++)
    {
        cout<<result[i-1]<<" ";
        if(result[i]-result[i-1]>maxd)
        maxd=result[i]-result[i-1];
        indd=i+1;
    }
    cout<<max<<" "<<ind<<" "<<maxd<<" "<<indd<<"\n";

    return 0;
}