#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
        vector<int> v;
        int input;
        cin>>n;
        for(int i=0;i<2*n;i++)
        {
            cin>>input;
            v.push_back(input);
        }
        int a=0,b=0;
        for(int i=0;i<2*n;i++)
        {
            if(i%2!=0 && v[i]==1)
            {
                a+=1;
            }
            if(i%2==0 && v[i]==1)
            {
                b+=1;
            }
            if(i>= n+1 && abs(a-b)>=2)
            {
                cout<<i;
                break;
            }
            if(i==(2*n)-1)
            cout<<2*n;
        
        }
    }    
    return 0;
}