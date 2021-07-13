#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,input;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>input;
        v.push_back(input);
    }
    int min=v[0];
    for(int i=0;i<v.size();i++)
    {
        if(v[i]<min)
        min=v[i];
    }
    for(int i=0;i<v.size();i++)
    {
        v[i]=v[i]-min;
    }
}