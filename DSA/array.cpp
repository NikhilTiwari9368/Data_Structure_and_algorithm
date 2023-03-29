// #include<iostream>
// using namespace std;
// int main()
// {
//     int n ;
//     cin>>n;

//     int array[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>array[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<array[i]<<" ";
//     }
//     return 0;
// }




// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     int maxNo= INT_MAX ;
//     int minNo = INT_MIN ;

//     for(int i=0;i<n;i++)
//     {
//         if(arr[i] > maxNo)
//         {
//             maxNo=arr[i];
//         }
//         if(arr[i]<minNo)
//         {
//             minNo = arr[i];
//         }
//         cout<< minNo << " " << minNo ;  
//     }
//     return 0;
// }



//  Min and max function in array ; 

#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n ;i++)
    {
        cin>>arr[i];
    }

    int minNo = INT_MIN;
    int maxNo = INT_MAX;
    for(int i=0;i<n;i++)
    {
        maxNo=max(maxNo,arr[i]);
        minNo=min(minNo,arr[i]);

    }
    cout<<maxNo<<" "<<minNo <<endl;
    return 0 ;
}