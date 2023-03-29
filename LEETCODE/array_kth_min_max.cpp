#include<iostream>
using namespace std;
int main()
{
    int n , k;
    cin>>n>>k;

    int arr[n] ,i ;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr , arr+n);
    cout<<arr[k-1] << " " << arr[n-k] ;
    return 0 ; 
}