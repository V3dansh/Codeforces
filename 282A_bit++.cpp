#include<iostream>
#include<vector>
using namespace std;

int bitProblem(vector<string>s)
{
    int X=0;

    for(int i=0;i<s.size();i++)
    {
        if(s[i][0]=='+' || s[i][2]=='+')
            X++;
        else if(s[i][0]=='-' || s[i][2]=='-')
            X--;
    }
    return X;
}


int main()
{
    int N;
    cin>>N;
    vector<string>s(N);
    for(int i=0;i<N;i++)
    {
        string word="";
        cin>>word;
        s[i]=word;
    }
    cout<<bitProblem(s);
    return 0;
}