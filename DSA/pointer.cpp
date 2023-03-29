// #include<iostream>
// #include<stack>
// using namespace std;

// class Stack
// {
//     // properties 
//     public:

//     int *arr;
//     int size;
//     int top;

//     Stack(int size)
//     {
//         this -> size = size ;
//         arr = new int[size];
//         top = -1 ;
//     }

//     void push(int element)
//     {
//         if(size - top > 1 )
//         {
//             top++;
//             arr[top] = element;
//         }
//         else{
//             cout<<"Stack overflow"<<endl;
//         }
//     }
    
//     void pop()
//     {
//         if(top >= 0)
//         {
//             top--;
//         }
//         else{
//             cout<<"Stack underflow"<<endl;
//         }
//     } 

//     int peek()
//     {
//         if(top >= 0 )
//         {
//             return arr[top];
//         }
//         else{
//             cout<<"Stack is Empty"<<endl;
//             return -1 ;
//         }
//     }

//     bool isEmpty(){
//         if(top == -1 )
//         {
//             return true ;
//         }
//         else
//         {
//             return false ;
//         }
//     }
// };

// int main()
// {
//     Stack s(5);

//     s.push(34);
//     s.push(40);
//     s.push(45);

    
//     s.pop();
//     cout<<"The peek value is"<< s.peek()<<endl;


//     // stack<int> s; 
//     // s.push(2);
//     // s.push(4);
//     // cout<<"The size is "<<s.size()<<endl;
//     // s.pop();
//     // cout<<"Printing top element "<<s.top()<< endl;

//     // if(s.empty())
//     // {
//     //     cout<<"Stack is Empty"<<endl;
//     // }
//     // else{
//     //     cout<<"Stack is not empty"<<endl;
//     // }

//     // return 0 ;
// }


#include<iostream>
#include<stack>

using namespace std;

int main()
{
    string str = "babbar";
    stack<char> s;
    for(int i=0;i<str.length();i++)
    {
        char ch = str[i];
        s.push(ch);
    }

    string ans = "" ;
    while(!s.empty())
    {
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }

    cout<<"answer is:"<< ans<<endl;
    return 0 ;

}