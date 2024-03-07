#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int lexicographical(string s1,string s2)
{
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    transform(s2.begin(),s2.end(),s2.begin(),::tolower);
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]<s2[i])
            return -1;
        else if(s1[i]>s2[i])
            return 1;
    }
    return 0;
}

int main()
{
    string s1="",s2="";
    cin>>s1;
    cin>>s2;

    cout<<lexicographical(s1,s2);
}