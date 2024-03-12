#include<iostream>
#include<math.h>
using namespace std;

int sashaAndTheDrawing(int n,int k)
{
    if((4*n)-2 == k)
        return ceil((k/2.0)+1);
    else
        return ceil(k/2.0);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        cout<<sashaAndTheDrawing(n,k)<<endl;
    }
    return 0;
}