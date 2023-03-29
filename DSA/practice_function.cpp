// SUM OF NATURAL NUMBER 

// #include<iostream>
// using namespace std;

// int sum(int n)
// {
//     int ans=0;
//     for(int i=1;i<=n;i++)
//     {
//         ans +=i;
//     }
//     return ans;
// }
// int main()
// {
//     int n; 
//     cin>>n;
//     cout<<sum(n)<<endl;
// }



// PYTHAGONAL TRIPILATE //

// #include<iostream>
// using namespace std;

// bool check(int x , int y , int z  )
// {
//     int a = max(x,max(y,z));
//     int a , b , c ;
//     if(a==x)
//     {
//         b=y;
//         c=z;
//     }
//     else if(a==y)
//     {
//         b=x;
//         c=z;
//     }
//     else{
//         b= x;
//         c = y;
//     }
//     if( a*a = b*b + c*c)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

// int main()
// {
//     int x,y,z;
//     cin>>x>>y>>z;
//     if(check(x,y,z))
//     {
//         cout<<"Pythagoren triplet";
//     }
//     else
//     {
//         cout<<"Not a Pythagoren triplet";
//     }
//     return 0;

// }



// BINARY TO DECIAML //


// #include<iostream>
// using namespace std;

// int binaryToDecimal(int n )
// {
//     int ans = 0;
//     int x = 1 ;
//     while(n>0)
//     {
//         int y = n%10;
//         ans += x*y;
//         x *= 2 ;
//         n /= 10;
//     }
//     return ans;
// }
// int main()
// {
//     int n ;
//     cin>>n;
//     cout<<binaryToDecimal(n)<<endl;
// }


// Octal to decimal 

// #include<iostream>
// using namespace std;
// int octalToDecimal(int n )
// {
//     int ans = 0;
//     int x = 1 ;
//     while(n>0)
//     {
//         int y = n%10;
//         ans += x*y;
//         x *= 8 ;
//         n /= 10;
//     }
//     return ans;
// }
// int main()
// {
//     int n ;
//     cin>>n;
//     cout<<octalToDecimal(n)<<endl;
// }



// HEXADECIMAL TO DECIMAL 
#include<iostream>
using namespace std;

int octalToDecimal(int n )
{
    int ans = 0;
    int x = 1 ;
    while(n>0)
    {
        int y = n%10;
        ans += x*y;
        x *= 8 ;
        n /= 10;
    }
    return ans;
}
int main()
{
    int n ;
    cin>>n;
    cout<<octalToDecimal(n)<<endl;
}