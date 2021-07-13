#include<bits/stdc++.h>
using namespace std;
int count=0;
vector<pair<int,int>> v;
void towerofhanoi(int n, int from_rod, int to_rod, int aux_rod,int count)
{

    if(n==1)
    {
        ::count+=1;
        v.push_back(make_pair(from_rod,to_rod));
        //cout<< from_rod << " "<<to_rod<<"\n";
        return;
    }
    towerofhanoi(n-1,from_rod,aux_rod,to_rod,count);
    //cout<<""<<from_rod<<" "<<to_rod<<"\n";
    ::count+=1;
    v.push_back(make_pair(from_rod,to_rod));
    towerofhanoi(n-1,aux_rod,to_rod,from_rod,count);
}
int main()
{
    int n;
    cin>>n;
    towerofhanoi(n,1,3,2,0);
    cout<<::count<<"\n";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<"\n";
    }
    return 0;
}