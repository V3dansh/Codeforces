#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void minimizeInversion(vector<int>&a,vector<int>&b)
{
    vector<pair<int,pair<int,int>>>v;
    int n=a.size();

    for(int i=0;i<n;i++)
        v.push_back({a[i]-1 + b[i]-1,{a[i],b[i]}});
    
    sort(v.begin(),v.end());

    for(int i=0;i<n;i++)
    {
        a[i]=v[i].second.first;
        b[i]=v[i].second.second;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v1(n);
        vector<int>v2(n);
        for(int i=0;i<n;i++)
            cin>>v1[i];
        for(int i=0;i<n;i++)
            cin>>v2[i];
        
        minimizeInversion(v1,v2);
        for(int i=0;i<n;i++)
            cout<<v1[i]<<" ";
        cout<<endl;
        for(int i=0;i<n;i++)
            cout<<v2[i]<<" ";
        cout<<endl;
    }
    return 0;
}