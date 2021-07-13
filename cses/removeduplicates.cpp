#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    set<char> st;
    cin>>s;
    int k=0;
    for(int i=0;i<s.size();i++)
    {
        st.insert(s[i]);
    }
    int size=st.size();
    for(int i=0;i<s.size();i++)
    {
        if(st.find(s[i])!=st.end())
        {
            s[k]=s[i];
            st.erase(s[i]);
            k++;
        }
    }
    for(int i=0;i<size;i++)
    {
        cout<<s[i];
    }
    return 0;
}