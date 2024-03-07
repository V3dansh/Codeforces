#include<iostream>
using namespace std;

int dominoPiling(int m,int n)
{
    return (m*n)/2;
}

int main()
{
    int m,n;
    cin>>m>>n;
    cout<<dominoPiling(m,n);
}