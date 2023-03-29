#include<iostream>
using namespace std ;
int main()
{
    int  n,m;
    cin>>n>>m;
    int k=89;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"MArtic form " <<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==k)
            cout<<arr[i][j]<<" ";
        }
        
        cout<<endl;

    }

    cout<<"ENTER A GUESS NUMBER"<<endl;
    int x;
    cin>>x;
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j] == x )
            {
                cout<< i << " " << j<< " \n";
                flag=true;
            }
        }
    }
    if(flag)
    {
        cout<<"ELEMT \n";
    }
    else
    {
        cout<<"NO \n";
    }
    return 0 ;
}