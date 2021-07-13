

#include <bits/stdc++.h>
#define mod 10000000007
using namespace std;
vector<int> leftshift(vector<int> a, int x)
{
	int i,j;
    for( j=0;j<x;j++)
	{
        int	temp=a[0];
	    for( i=0;i<a.size()-1;i++)
	    {
		    a[i]=a[i+1];
		
	    }
	    a[i]=temp;
    }
    return a;
}
vector<int> rightshift(vector<int> a,int x)
{
	int i,j,temp;
   for( j=0;j<x;j++)
	{
	    temp=a[a.size()-1];
	    for(i=a.size()-1;i>0;i--)
	    {
	
		    a[i]=a[i-1];
		
    	}
	    a[i]=temp;
    } 
    return a;
}
int main() {
	// your code goes here
	int n;
    vector<int > b;
    vector<int > a;
    vector<int> temp;
	int q,x,i,inp;
	int t,k;
	long long int sum=0;
	cin>>n;
	while(n--)
	{
	    sum=0;
	    cin>>inp;
	    b.push_back(inp);
	}
	cin>>q;
	while(q--)
	{
		sum=0;
	    cin>>x;
	    if(x>=0)
	    {
	        a=rightshift(b,x);
	    }
	    else
	    {
	        a=leftshift(b,x);
	    }
	    t=b.size()+a.size();
	    k=0;
	    for(int i=b.size();i<t;i++)
	    {
	    	b.push_back(a[k]);
	    	k++;
		}
		for(int i=0;i<t;i++)
		{
			sum+=b[i]; 
		}
	      
	    cout<<sum % mod<<"\n";
}

	return 0;
}



