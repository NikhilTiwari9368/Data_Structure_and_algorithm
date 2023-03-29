#include<iostream>
using namespace std ;

class node{
    public:
    int data;
    node* next ;

    node(int d)
    {
        this -> data = d;
        this -> next = NULL;
    }
    ~node()
    {
        int value = this->data;
        if(this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout<<" memory is free for node with data"<< value << endl;
    }
};

void insertnode(node* &tail , int element , int d)
{
    if(tail == NULL)
    {
        node* newNode = new node(d);
        tail = newnode;
        newnode -> next = newnode;
    }
    else{
        node* curr = tail;
        while(curr->data != element)
        {
            curr = curr -> next;
        } 
        node* temp = new node(d);
        temp -> next = curr -> next;
        curr -> next = temp ;
    }

}

void print(node* tail)
{
    node* temp = tail ;
    do{
        cout<<tail -> data <<" ";
        tail = tail -> next ;
    }while(tail != temp);
    cout<<endl;
}
int main()
{
    node* tail = NULL ;
    insertnode(tail , 5 , 3);
    print(tail);

    insertnode(tail , 3 , 5);
    print(tail);

    insertnode(tail , 5 , 7 );
    print(head);
    
    return 0 ;
}