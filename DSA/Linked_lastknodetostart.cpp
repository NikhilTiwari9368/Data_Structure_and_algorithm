#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;

    node(int val)
    {
        data = val ;
        next = NULL ;
    }
};
void insertAtHead(node* &head , int val)
{
    node* n = new node(val);
    n->next = head ;
    head = n ;
}
void insertAtTail(node* &head , int val)
{

    node* n = new node(val);

    if(head == NULL)
    {
        head = n ;
        return ;
    }
    node* temp = head;
    while(temp->next != NULL)
    {   
        temp = temp->next;
    }
    temp->next = n ;
}

node* merge(node* &head1 , node* &head2)
{
    node* p1 = head1 ; 
    node* p2 = head2;
    node* dummyNode = new node(-1);
    node* p3 = dummyNode;

    while(p1 != NULL && p2 != NULL)
    {
        if(p1->data < p2->data)
        {
            p3->next = p1;
            p1 = p1->next;
        }
        else
        {
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }

    while(p1 != NULL )
    {
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }
    while(p2 != NULL)
    {
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }

}

// append k list in the list 

// int length(node* head)
// {
//     int l=0;
//     node* temp = head;
//     while(temp != NULL)
//     {
//         l++;
//         temp = temp->next;
//     }
//     return l ;
// }
// node* kappend(node* &head , int k )
// {
//     node* newHead;
//     node* newTail;
//     node* tail = head;

//     int l = length(head);
//     k=k%l;
//     int count=1;
//     while(tail->next != NULL)
//     {
//         if(count == l-k)
//         {
//             newTail = tail;
//         }
//         if(count == l-k+1)
//         {
//             tail = tail->next;
//             count++;
//         }
//         return newHead;
//     }
// }

node* mergeRecursive(node* &head1 , node* &head2)
{
    if(head1 == NULL)
    {
        return head2;
    }
    if(head2==NULL)
    {
        return head1;
    }
    node* result ;
    if(head1->data < head2->data)
    {
        result = head1;
        result->next = mergeRecursive(head1->next , head2);
    }
    else
    {
        result = head2;
        result->next = mergeRecursive(head1 , head2->next);
    }

}
void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}



int main()
{
    node* head1= NULL;
    node* head2= NULL;
    int arr1[] = {1,4,5,7};
    int arr2[] = {2,3,6};
    for(int i=0;i<4;i++)
    {
        insertAtTail(head1,arr1[i]);
    }
    for(int i=0;i<3;i++)
    {
        insertAtTail(head2,arr2[i]);
    }

    display(head1);
    display(head2);
    node* newhead = merge(head1,head2);
    display(newhead);

    return 0 ;
}