#include<bits/stdc++.h>
using namespace std;
int main()
{
    int start,end,digits,t1,t2;
    string str,temp1,temp2;
    long long sqr,sum;
    cin>>start>>end;
    for(int i=start;i<=end;i++)
    {
        if(i>=1&&i<=9)
        digits=1;
        else if(i>=10&&i<=99)
        digits=2;
        else if(i>=100&&i<=999)
        digits=3;
        else if(i>=1000&&i<=9999)
        digits=4;
        else if(i>=10000&&i<=99999)
        digits=5;
        sqr=pow(i,2);
        str=to_string(sqr);
        temp1=str.substr(0,digits);
        temp2=str.substr(digits,str.size()-digits);
        cout<<temp1<<" "<<temp2;
        //t1=stoi(temp1);
        //t2=stoi(temp2);
        sum=t1+t2;
        
        if(sqr==sum)
        {
            cout<<i<<" ";
        }
    }
}