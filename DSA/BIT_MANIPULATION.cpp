#include<iostream>
using namespace std;

//GETBIT 

int getBit(int n , int pos)
{
    return ((n & (1<pos)) != 0);
}

//SETBIT 

int setBit(int n , int pos)
{
    return ( n | (1<<pos));
}

//CLEARBIT 

int clearBit(int n , int pos)
{
    int mask = ~(1<<pos);
    return (n & mask);
}

//UPDATEBIT

int updateBit(int n , int pos ,int value)
{
    int mask = ~(1<<pos);
    n = n & mask;
    return (n | (value<<pos));
}

int main()
{
    //cout<<getBit(5,2)<<endl;
    //cout<<setBit(5,1)<<endl;
    //cout<<clearBit(5,2)<<endl;
    cout<<updateBit(5,1,1)<<endl;
    return 0 ;
}