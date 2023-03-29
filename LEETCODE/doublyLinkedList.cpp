#include<iostream>
using namespace std;

class node{
    public :
    int data ;
    node* prev ;
    node* next ;

    node(int d)
    {
        this -> data = d;
        this -> next = NULL;
        this -> prev = NULL;
    }

    ~node(){
        int val = this -> data;
        if(next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout<<" memory free for node with data"<< val << endl;
    }
};

// traversing a Linked List 

void print(node* head)
{
    node* temp = head ;

    while(temp != NULL)
    {
        cout << temp -> data << "->";
        temp = temp -> next ;
    }
    cout << endl;
}

// length of Linked List 
int getlenght(node* head)
{
    int len=0;
    node* temp = head;
    while(temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len ;
}

void insertAthead(node* &tail , node* &head , int d)
{
    if(head == NULL)
    {
        node* temp = new node(d);
        head = temp ;
        tail = temp ; 
    }
    else{
    node* temp  = new node(d);
    temp -> next = head ;
    head -> prev = temp ;
    head = temp;
    tail = temp;
    }
    
}

void insertAttail(node* &tail ,node* &head , int d)
{
    if(tail == NULL)
    {
        node* temp = new node(d);
        tail = temp ;
        head = temp;
    }
    else{
    node* temp = new node(d);
    tail -> next = temp ;
    temp -> prev = tail ;
    tail = temp;
    }
    
}

void insertAtPosition(node*  &tail ,  node* &head , int position , int d )
{
    if(position == 1 )
    {
        insertAthead(tail,head , d);
        return ;
    }

    node* temp = head ;
    int cnt = 1 ;
    while(cnt < position-1)
    {
        temp = temp -> next ;
        cnt++ ;
    }

    if(temp -> next == NULL)
    {
        insertAttail(tail , head , d);
        return ;
    }
    //creating a node for d 
    node* nodetostart = new node(d);

    nodetostart -> next = temp -> next ;
    temp -> next -> prev = nodetostart;
    temp -> next = nodetostart;
    nodetostart -> prev = temp ;

}

void deleteNode(node* &head , int position)
{
    if(position == 1 )
    {
        node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp ;
    }
    else
    {
        node* curr = head;
        node* prev = NULL;

        int cnt = 1;
        while(cnt < position)
        {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        curr -> prev = NULL;
        prev -> next = curr -> next ;
        curr -> next = NULL;
        delete curr;
    }
}
int main()
{
    node* node1 = new node(10);
    node* head = node1 ;
    node* tail = node1 ; 

    print(head);
    cout<< getlenght(head)<<endl;

    insertAthead(tail , head , 33);
    print(head);
    cout<<"head"<<head -> data << endl;
    cout<<"tail "<<tail -> data << endl;

    insertAttail(tail,head,25);
    print(head);
    cout<<"head"<<head -> data << endl;
    cout<<"tail "<<tail -> data << endl;


    insertAtPosition(tail , head ,1, 100);
    print(head);
    cout<<"head"<<head -> data << endl;
    cout<<"tail "<<tail -> data << endl;

    insertAtPosition(tail , head ,3, 50);
    print(head);
    cout<<"head"<<head -> data << endl;
    cout<<"tail "<<tail -> data << endl;

    deleteNode(head , 1 );
    print(head);
    cout<<"head"<<head -> data << endl;
    cout<<"tail "<<tail -> data << endl;

}