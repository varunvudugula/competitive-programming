#include<bits/stdc++.h>
using namespace std;
int main()
{
       int flag=0,i;
       string s;
        printf("enter the string:");
scanf("%s",s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]>=48&&s[i]<=57)
{
flag=s
}
}
if(flag==0)
printf("given string not contains numbers");
else
printf("given string contains numbers");
return 0;
}