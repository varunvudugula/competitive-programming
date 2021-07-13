#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    vector<int> v;
	    int count=0;
	    int n,size,strength,inp,maxi;
	    cin>>n>>strength;
	    for(int i=0;i<n;i++)
	    {
	        cin>>inp;
	        v.push_back(inp);
	    }
        size=v.size()-1;
	    while(strength>0)
	    {
	        sort(v.begin(),v.end());
	        maxi=v[size];
	        strength-=maxi;
	        v[size]/=2;
	        count++;
	    }
	    cout<<count<<"\n";
	    
	}
	return 0;
}
