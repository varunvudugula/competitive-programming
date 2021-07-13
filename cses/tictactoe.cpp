#include<bits/stdc++.h>
using namespace std;
int checkh(string a)
{
	char ch=a[0];
	if(ch=='X'||ch=='O')
	for(int i=1;i<3;i++)
	{
		if(a[i]!=ch)
		{
			
			return 0;
		}
	}
	if(ch=='X'||ch=='O')
	{
	//cout<<"horizontal\n";
	return 1;
}
else 
return 0;
}
int checkv(string a,string b,string c)
{
	for(int i=0;i<3;i++)
	{
		if((a[i]=='X'||a[i]=='O')&&(a[i]==b[i]&&a[i]==c[i]))
		
		{
		//	cout<<"vertical\n";
				return 1;
	}
}
	return 0;
	
}
int diag(string a,string b,string c)
{
	if((a[0]=='X'||a[0]=='O')&&(a[0]==b[1])&&(a[0]==c[2]))
	
	{
		//cout<<"principal diagonal\n";
		return 1;
	}
	
	else
	return 0;
}
int adiag(string a,string b,string c)
{
	if((a[2]=='X'||a[2]=='O')&&((a[2]==b[1])&&(a[2]==c[0])))
	{
		//cout<<"anti diagonal\n";
		return 1;
	}
	else 
	return 0;
}
int main()
{
	int t,sum=0;
	cin>>t;
	string a,b,c;
	while(t--)
	{
		sum=0;
		cin>>a>>b>>c;
		sum=checkh(a)+checkh(b)+checkh(c)+checkv(a,b,c)+diag(a,b,c)+adiag(a,b,c);
		//cout<<sum<<"\n";
		if(sum==1)
		{cout<<"1\n";
		}
		else if(sum==0)
		{
			cout<<"2\n";
		}
		else if(sum>1)
		{
			cout<<"3\n";
		}
		
		
	}
	return 0;
}
