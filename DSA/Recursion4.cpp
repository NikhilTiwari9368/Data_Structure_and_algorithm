//// PRINT ALL POSSIBLE PERMUTATIONS OF A STRING /// 

// #include<iostream>
// using namespace std;

// void permutation(string s , string ans)
// {
//     if(s.length() == 0)
//     {
//         cout<<ans<<endl;
//         return ; 
//     }

//     for(int i=0 ; i < s.length() ;i++)
//     {
//         char ch = s[i];
//         string ros = s.substr(0,i) + s.substr(i+1);
//         permutation(ros , ans + ch);
//     }
// }
// int main()
// {
//     permutation("ABC" ,"");
//     cout<<endl;
// }



//// COUNT THE NUMBER OF PATHS POSSIBLE FROM START POINT TO END POINT IN GAMEBOARD ///
// #include<iostream>
// using namespace std;

// int countPath(int s , int e)
// {
//     if(s==e)
//     {
//         return 1;
//     }
//     if(s>e)
//     {
//         return 0;
//     }
//     int count = 0 ;
//     for(int i=0;i<=6;i++)
//     {
//         count+= countPath(s+i , e);
//     }
//     return count ;

// }
// int main()
// {
//     cout<<countPath(0,3)<<endl ;
//     return 0 ;
// }



///// COUNT THE NUMBER OF PATHS POSSIBLE IN A MAZE /////

// #include<iostream>
// using namespace std;

// int countPathMaze(int n ,int i ,int j )
// {
//     if(i==n-1 && j == n-1 )
//     {
//         return 1;
//     }
//     if(i>=n || j>=n)
//     {
//         return 0;
//     }
//     countPathMaze(n,i+1,j) + countPathMaze(n,i,j+1); 
// }
// int main()
// {
//     cout<<countPathMaze(3,0,0)<<endl;
//     return 0; 
// }


///////////////////////////////

// #include<iostream>
// using namespace std;

// int tilingWays(int n)
// {
//     if(n==0)
//     {
//         return 0;
//     }
//     if(n==1)
//     {
//         return 1;
//     }
//     return tilingWays(n-1) + tilingWays(n-2);
// }
// int main()
// {
//     cout<<tilingWays(4)<<endl;
//     return 0;  
// }


/// FRIENDS PAIRING PROBLEM /// 
// #include<iostream>
// using namespace std;

// int friendsPairing(int n)
// {
//     if(n==0 || n==1 || n==2)
//     {
//         return n;
//     }
//     return friendsPairing(n-1) + friendsPairing(n-2)*(n-1);
// }
// int main()
// {
//     cout<<friendsPairing(4)<<endl;
//     return 0 ;
// }


//// 0-1 KNAPSACK  PROBLEM /////

#include<iostream>
using namespace std;

int knapsack(int value[] , int wt[] , int n , int W)
{
    if(n==0 || W==0)
   {
       return 0;
   }

   if(wt[n-1]>W)
   {
       return  knapsack(value , wt , n-1 , W) ;
   }
    return  max(knapsack(value , wt, n-1 , W-wt[n-1]) + value[n-1],knapsack(value , wt , n-1 , W));
}
int main()
{
    int wt[] ={10,20,30};
    int value[] ={100,50,150};
    int W=50;
    cout<<knapsack(value,wt,3,W)<<endl;
    return 0 ;
}