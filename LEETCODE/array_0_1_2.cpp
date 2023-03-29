#include<iostream>
using namespace std
{
    int n;
    cin>>n;
    int arr[n] , i ;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int c0 = 0 , c1 = 0 , c2 = 0 ;

    for(i=0;i<n;i++)
    {
        if(arr[i] == 0 )
        {
            c0++;
        }
        else if (arr[i] == 1 )
        {
            c1++;
        }
        else if(arr[i] == 2)
        {
            c2++;
        }
    }
    for(i=0;i<c0;i++)
    {
        arr[i] = 0 ;
    }
    for(i=c0 ; i<c0+c1 ;i++)
    {
        a[i] = 1 ;
    }
    while(c2--)
    {
        a[i++] = 2 ;
    }

    for(int i = 0 ;i < n ;i++)
    {
        cout<<arr[i];
    }
     return 0 ;
} 
