#include<iostream>
using namespace std;

bool watermelon(int x)
{
    return x%2==0 && x>2;
}

int main()
{
    int input;
    cin>>input;

    if(watermelon(input))
        cout<<"YES";
    else
        cout<<"NO";
    
    return 0;
}