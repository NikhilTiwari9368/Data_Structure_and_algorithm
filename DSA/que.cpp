// // queue is work on first in first out (FIFO) functionality. 

// // push - rear ,
// // pop - front .


// #include<iostream>
// #include<queue>
// using namespace std;

// int main()
// {
//     queue<int> q ;
//     q.push(23);
//     cout<<"front of q is:"<<q.front()<<endl;

//     q.push(45);
//     cout<<"front of q is:"<<q.front()<<endl;

//     q.push(56);
//     cout<<"the size is "<<q.size()<<endl;

//     q.pop();
//     q.pop();
//     q.pop();

//     cout<<"the size is "<<q.size()<<endl;
//     if(q.empty())
//     {
//         cout<<"Queue is empty"<< endl;
//     }
//     else{
//         cout<<"queue is not empty"<< endl;
//     }

    
//     return 0;
// }

 

// #include<iostream>
// using namespace std;
// class heap{
//     public:
//     int arr[100];
//     int size = 0;

//     void insert(int val)
//     {
//         size = size + 1;
//         int index = size;
//         arr[index] = val; 

//         while( index > 1 )
//         {
//             int parent = index/2 ;

//             if(arr[parent] < arr[index])
//             {
//                 swap(arr[parent],arr[index]);
//                 index = parent;
//             }
//             else{
//                 return ;
//             }
//         }
//     }

//     void print()
//     {
//         for(int i=1; i<size; i++)
//         {
//             cout<<arr[i] <<" ";
//         }
//         cout<<endl;
//     }

//     void delete()
//     {
//         if(size == 0)
//         {
//             cout<<"nothing to delete"<<endl;
//             return ;
//         }
//     }
// };

// int main()
// {
//     heap h;
//     h.insert(50);
//     h.insert(55);
//     h.insert(53);
//     h.insert(52);
//     h.insert(54);
//     return 0 ;
// }

 

