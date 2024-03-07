#include<iostream>
#include<vector>
using namespace std;

int nextRound(vector<int>nums,int k)
{
    int ans=0;
    for(int i=0;i<nums.size();i++)
        if(nums[i]>=nums[k-1] && nums[i]>0)
            ans++;

    return ans;
}

int main()
{
    int N;
    cin>>N;
    int k;
    cin>>k;
    vector<int>nums(N);
    for(int i=0;i<N;i++)
        cin>>nums[i];
    
    cout<<nextRound(nums,k);
}