#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {3,5,6,2,1};

    for(int i = 0 ; i< 5 ;i++)
    {
        if(arr[i] < arr[i+1])
        {
            swap(arr[i] , arr[i+1]);
        }
        cout<<arr<<endl;
    }
    
    return 0 ;

}