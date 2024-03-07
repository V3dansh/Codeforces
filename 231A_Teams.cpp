#include<iostream>
#include<vector>
using namespace std;

int numberOfProblems(vector<vector<int>>nums)
{
    int ans=0;
    for(int i=0;i<nums.size();i++)
    {
        int correct=0;
        for(int j=0;j<nums[i].size();j++)
        {
            if(nums[i][j]==1)
                correct++;
            if(correct>1)
            {
                ans++;
                break;
            }
        }
    }
    return ans;
}

int main()
{
    int N;
    cin>>N;
    vector<vector<int>>nums(N,vector<int>(3));
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>nums[i][j];
        }
    }
    cout<<numberOfProblems(nums);
    
}