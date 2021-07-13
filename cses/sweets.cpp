#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,input,count=0;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>input;
        v.push_back(input);
    }
    for(int i=0;i<n;i++)
    {
        count+=v[i];

    }
    int p=*max_element(v.begin(),v.end());
    cout<<count/2<<"\n";
    return 0;
}