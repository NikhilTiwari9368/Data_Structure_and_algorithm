#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n] ,i ;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int mn = INT_MAX , mx = INT_MIN ;
    for(i = 0 ; i < n ; i++)
    {
        if(mn > a[i])
        {
            mn=a[i];
        }
        
    }
    for(i=0;i<n;i++)
    {
        if(mx<a[i])
        {
            mx=a[i];
        }
    }

    cout<< mn << " " << mx ;
    return 0 ;
}