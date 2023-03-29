// #include<iostream>
// using namespace std;
// int main()
// {
//     int mx=-19999999;
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }

//     for(int i=0;i<n ; i++)
//     {
//         mx = max(mx,arr[i]);
//         cout<<mx<<endl;
//     }
//     return 0; 
// }





//  SUBARRAY V/S  SUBSEQUENCES 

// #include<iostream>
// using namespace std ;
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }

//     int curr = 0 ;
//     for(int i=0;i<n;i++)
//     {
//         curr=0;
//         for(int j=i;j<n;j++)
//         {
//             curr += a[j];
//             cout << a[j]<<endl;
//         }
//     }
//     return 0 ;
// }



//

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }

//     int ans = 2 ;
//     int pd = a[1] - a[0];
//     int j=2;
//     int curr = 2 ;
    
//     while(j<n)
//     {
//         if(pd == a[j] - a[j-1])
//         {
//             curr++;
//         }
//         else{
//             pd = a[j] - a[j-1];
//             curr = 2 ;
//         }
//         ans = max(ans,curr);
//         j++;
//     }
//     cout<< ans << endl;
//     return 0 ;

// }


//  #include<iostream>
//  using namespace std ;
//  int main()
//  {
//      int n;
//      cin>>n;

//      int a[n+1];
//      a[n] = -1;

//      for(int i=0 ;i<n;i++)
//      {
//          cin>>a[i];
//      }
//      if(n==1)
//      {
//          cout<<"1"<<endl;
//      }

//      int ans = 0 ;
//      int mx = -1 ;

//      for(int i=0 ; i<n ; i++)
//      {
//          if(a[i] > mx && a[i] > a[i+1] )
//          {
//              ans++;
//          }
//          mx = max(mx,a[i]);
//      }
//      cout<<endl;
//      return 0;
//  }



//

// #include<iostream>
// #include<climits>
// using namespace std ;
// int main()
// {
//     int n;
//     cin>>n;

//     int a[n];

//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }

//     const int N = 1e6+2;
//     int idx[N];
//     for(int i=0;i<N;i++)
//     {
//         idx[i] = -1;
//     }
//     int minidx = INT_MAX;
//     for(int i=0;i<n;i++)
//     {
//         if(idx[a[i]] != -1 )
//         {
//             minidx = min(minidx , idx[a[i]]);
//         }
//         else
//         {
//             idx[a[i]] = i;
//         }

//     }
//     if(minidx == INT_MAX)
//     {
//         cout<<"-1"<<endl;
//     }
//     else
//     {
//         cout<<minidx + 1 << endl;
//     }
//     return 0 ;
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,s;
//     cin>>n>>s;

//     int a[n];
//     for(int i=0 ;i<n;i++)
//     {
//         cin>>a[i];
//     }

//     int i=0 ; j=0 ; st=-1 , en=-1 , sum=0 ;

//     while(j<n && sum+a[j] <= s)
//     {
//         sum += a[j];
//         j++;
//     }
//     if(sum == s)
//     {
//         cout<< i+1 <<" "<< j << endl;
//         return 0; 
//     }

//     while(j<n)
//     {
//         sum += a[j];
//         while(sum > s)
//         {
//             sum  -= a[i];
//             i++;
//         }
//         if(sum == s )
//         {
//             st = i+1 ;
//             en = j+1 ;
//             break ;
//         }
//         j++;
//     }

//     return 0;
// }