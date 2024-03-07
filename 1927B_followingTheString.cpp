#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

string traceString(vector<int>nums)
{
    unordered_map<char,int>mp;

    for(char c='a';c<='z';c++)
    {
        mp[c]=0;
    }

    string word="";

    for(int i=0;i<nums.size();i++)
    {
        for(auto& pair:mp)
        {
            if(pair.second==nums[i])
            {
                word+=pair.first;
                pair.second++;
                break;
            }
        }
    }
    return word;
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
        
        cout<<traceString(nums)<<endl;
    }
    return 0;
}