#include<iostream>
#include<vector>
using namespace std;

bool rudolfAnd121(vector<int> nums) {
    //v[i]-=2*v[i-1];
    //v[i+1]-=v[i-1];
    //v[i-1]=0;

    for(int i=1;i<nums.size()-1;i++)
    {
        if(nums[i]==0)
            continue;
        if(nums[i-1]*2>nums[i])
            return false;
        else
        {
            nums[i]-=2*nums[i-1];
            nums[i+1]-=nums[i-1];
            nums[i-1]=0;
        }
    }
    for(int i=0;i<nums.size();i++)
        if(nums[i]!=0)
            return false;
    
    return true;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>nums(n);
        for(int i=0;i<n;i++)
            cin>>nums[i];
        if(rudolfAnd121(nums))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}