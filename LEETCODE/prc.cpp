#include<iostream>
using namespace std;

void saydigit(int n , string *arr[])
{
    if(n==0)
    {
        return 0 ;
    }
    int digit = n%10;
    cout << arr[digit]<<" ";
}
int main()
{
    string arr[10] = {"one" , "Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten"};
    saydigit(n,arr);
    cout<<endl;
    return 0 ;
}