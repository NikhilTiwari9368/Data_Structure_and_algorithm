// #include<iostream>
// using namespace std;

// int power(int n , int p)
// {
//     if(p==0)
//     {
//         return 1;
//     }
//     int prevPower = power(n , p-1);
//     return n*prevPower; 
// }
// int main()
// {
//     int n,p;
//     cin>>n>>p;
//     cout<<power(n,p)<<endl;
//     return 0;
// }


// FIND THE FACTORIAL OF NUMBER N 

// #include<iostream>
// using namespace std;

// int factorial(int n)
// {
//     if(n==0 )
//     {
//         return 1;
//     }
//     else
//     {
//         return (n*factorial(n-1));
//     }
// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<factorial(n)<<endl;
//     return 0;
// }


// PRINT THE NTH FIBONACCI NUMBER 

#include<iostream>
using namespace std;
int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    else
    {
        return (fib(n-1)+fib(n-2));
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}