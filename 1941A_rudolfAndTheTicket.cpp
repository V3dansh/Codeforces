#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int rudolfAndTheTicket(vector<int>v1,vector<int>v2,int k)
{
    //brute-force approach
    // int count=0;
    // for(int i=0;i<v1.size();i++)
    // {
    //     for(int j=0;j<v2.size();j++)
    //     {
    //         if((v1[i]+v2[j])<=k)
    //             count++;
    //     }
    // }
    // return count;

    //optimal solution
    int i=0;
    int j=v2.size()-1;
    int count=0;
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    while(i<v1.size() && j>=0)
    {
        if(v1[i]+v2[j]<=k)
        {
            count+=(j+1);
            i++;
        }
        else
            j--;
    }
    return count;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        vector<int>v1(n);
        vector<int>v2(m);

        for(int i=0;i<n;i++)
            cin>>v1[i];
        for(int i=0;i<m;i++)
            cin>>v2[i];
        cout<<rudolfAndTheTicket(v1,v2,k)<<endl;
    }
}