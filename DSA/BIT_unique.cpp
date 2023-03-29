// #include<iostream>
// using namespace std;

// int setBit(int n , int pos)
// {
//     return ((n & (1<<pos)) !=0);
// }
// int unique(int arr[] , int n)
// {
//     int xorsum=0;
//     for(int i=0;i<n;i++)
//     {
//         xorsum = xorsum^arr[i];
//     }
//     int setbit=0;
//     int pos=0;
//     while(setbit != 1)
//     {
//         setbit = xorsum & 1 ;
//         pos++;
//         xorsum = xorsum >> 1 ;
//     }

//     int newxor=0;
//     for(int i=0;i<n;i++)
//     {
//         if(setBit(arr[i],pos-1))
//         {
//             newxor = newxor^arr[i];
//         }
//     }
//     cout<<newxor<<endl;
//     cout<<(tempxor^newxor)<<endl;
//     return xorsum;
// }
// int main()
// {
//     int arrr[] ={1,2,3,4,1,2,3};
//     return 0 ;
// }


/// 


#include<iostream>
using namespace std;

bool getbit(int n ,int pos)
{
    return ((n & (1<<pos)) !=0)
}

int unique(int arr[] , int n)
{
    for(int i=0;i<64;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            if(getbit(arr[j],i))
            {
                sum++;
            }
        }
        if(sum%3 !=0)
        {
            result = setbit(result,i); 
        }
    }
    return result;
}
int main()
{

}