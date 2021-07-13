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
    sort(v.begin(),v.end());
    int j=v.size()-1,k=v.size();
    for(int i=0;i<n;i++)
    {
        if(v[i]*2<=v[j])
        {
            k-=1;
            j--;
        }
    }
    cout<<k<<"\n";
    return 0;

}