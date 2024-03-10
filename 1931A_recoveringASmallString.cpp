#include<iostream>
#include<vector>
#include<string>
using namespace std;

string recoveringASmallString(int n)
{
    vector<char>v;
    for(char c='a';c<='z';c++)
        v.push_back(c);
    string ans="";
    if (n <= 28)
    {
        ans="a";
        ans+="a";
        ans+=v[n-2-1];
    }
        //ans = "a" + string(1, 'a') + string(1, v[n - 2-1]);
    else if (n <= 53)
    {
        ans="a";
        ans+=v[n-27-1];
        ans+="z";
    }
        //ans = "a" + string(1, v[n - 27-1]) + "z";
    else if (n <= 78)
    {
        ans=v[n-52-1];
        ans+="z";
        ans+="z";
    }
        //ans = string(1, v[n - 52-1]) + "z" + "z";

    return ans;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<recoveringASmallString(n)<<endl;
    }
    return 0;
}