#include<bits\stdc++.h>
using namespace std;
int main()
{
    int t;
    int hosts,problems,days;
    
    cin>>t;
    while(t--)
    {
        vector<int> hp;
        int input,sum=0;
        cin>>hosts>>problems>>days;
        for(int i=0;i<hosts;i++)
        {
            cin>>input;
            hp.push_back(input);
        }
        for(int i=0;i<hp.size();i++)
        {
            sum+=hp[i];
        }
        if(sum/problems<days)
        cout<<sum/problems;
        else
        {
            cout<<days;
        }
        

    }
    return 0;
}