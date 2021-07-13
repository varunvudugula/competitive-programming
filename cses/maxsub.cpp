
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,input;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>input;
        v.push_back(input);
    }
    int best1=0,best2=0,sum=0;
    for(int k=0;k<n/2;k++)
    {
        sum=max(v[k],sum+v[k]);
        best1=max(best1,sum);
    }
    for(int k=n/2;k<n;k++)
    {
        sum=max(v[k],sum+v[k]);
        best2=max(best2,sum);
    }
    cout<<best2+best1<<"\n";
    return 0;
}