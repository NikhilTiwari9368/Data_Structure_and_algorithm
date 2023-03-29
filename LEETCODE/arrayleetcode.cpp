#include<iostream>
using namespace std;


void printArray(int arr[] , int n )
{
    for(int i=0 ; i < n ;i++)
    {
        cout<<arr[i] << " ";
    }
    cout<<endl;
}
void SwapArray(int arr[] , int size )
{
    for(int i=0  ; i < size ; i+=2)
    {
        if(i+1 < size)
        {
        swap(arr[i] , arr[i+1]);
        i++;
        }
    }
}
int main()
{
    int arr[6] ={1,3,2,7,11,8};
    int arr2[5] ={2,5,1,7,6};

    SwapArray(arr , 6);
    printArray(arr , 6 );
    cout<<endl;

    SwapArray(arr2 , 5);
    printArray(arr2 , 5);
    cout<<endl;

    return 0 ;
}