#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<"it is not a prime "<<endl;
            break ;
        }
        else
       {
            cout<<"It is prime"<<endl;
            break;
       }
    }
    return 0; 
}