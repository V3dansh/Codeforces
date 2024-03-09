#include<iostream>
#include<vector>
using namespace std;

bool makeEqual(vector<int>v)
{
    if(v.empty())
        return false;
    int sum=0;
    int n=v.size();
    for(int i=0;i<v.size();i++)
        sum+=v[i];
    
    if(sum%n!=0)
        return false;
    
    long long int extra=0;
    int element=sum/n;
    for(int i=0;i<n;i++)
    {
        if(v[i]>=element)
        {
            extra+=(v[i]-element);
        }
        else
        {
            long long int need=element-v[i];
            if(extra>=need)
            {
                extra-=need;
            }
            else
                return false;
        }
    }
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
        vector<int>v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        if(makeEqual(v))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}