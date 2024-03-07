#include<iostream>
#include<vector>
using namespace std;

int beautifulMatrix(vector<vector<int>>matrix)
{
    int ans=0;
    if(matrix[2][2]==1)
        return 0;
    
    int idx1=0,idx2=0;
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix[i].size();j++)
        {
            if(matrix[i][j]==1)
            {
                idx1=i;
                idx2=j;
                break;
            }
        }
    }

    ans+=abs(idx2-2);
    ans+=abs(idx1-2);
    return ans;
}

int main()
{
    vector<vector<int>>matrix(5,vector<int>(5));

    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            cin>>matrix[i][j];

    cout<<beautifulMatrix(matrix);
    return 0;
}