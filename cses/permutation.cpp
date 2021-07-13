#include <bits/stdc++.h>

using namespace std;


void display(vector<int> a, long long n){
    for(int i=0;i<n;i++) cout << a[i] << " ";
    cout << endl;
}

int main()
{
    
    long long n,step=1;
    cin >> n;

    
    vector<int> a(n);
    
    
    for(long long i=0; i<n; i++){
         a[i]=i+1;
    }
    if(a.size()==1)
    {
        display(a,n);
        return 0;
    }

      
    while(next_permutation(a.begin(), a.end()))
    {
        step=1;
        for(int i=0;i<n-1;i++)
        {
            if(abs(a[i]-a[i+1])!=1)
            {
                step*=1;
            }
            else
            {
                step*=0;
            }
        }
        if(step==1)
        {
            display(a, n);
            return 0;
        }
    }
    cout<<"NO SOLUTION";
    return 0;
}
