#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int sashaAndTheBeautifulArray(vector<int>v)
{
    sort(v.begin(),v.end());
    int sum=0;
    for(int i=1;i<v.size();i++)
        sum+=v[i]-v[i-1];
    
    return sum;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];

        cout<<sashaAndTheBeautifulArray(v)<<endl;
    }
    return 0;
}