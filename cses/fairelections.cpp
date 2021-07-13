#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;

while(t)
{
int n,m,sa=0,sb=0,temp,count=0;
cin>>n>>m;
int a[n],b[m];

for(int i=0;i<n;i++)
{
cin>>a[i];
sa+=a[i];
}

for(int i=0;i<m;i++)
{
cin>>b[i];
sb+=b[i];
}
int bo = 0;
while(sa<=sb)
{
sort(a,a+n);
sort(b,b+m,greater<int>());
if(a[0]<b[0])
{
sa = sa + b[0] -a[0];
sb = sb + a[0] - b[0];
int tmp = a[0];
a[0] = b[0];
b[0] = tmp;
count++;
}
else
{
bo = 1;
cout<<"-1"<<endl;
break;
}
}
if(bo == 0)
{
cout<<count<<endl;
}
t--;
}
return 0;
}