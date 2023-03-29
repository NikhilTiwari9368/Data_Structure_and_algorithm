#include<iostream>
using namespace std;

class node {
    public:

    int data;
    node* next ;

    node(int data)
    {
        this -> data = data ;
        this -> next = NULL;
    }

    // destructor
    ~node()
    {
        int value = this -> data ;
        // memory
        if(this->next != NULL)
        {
            delete next;
            this->next = NULL ;
        }
        cout<<"memory is free for node with data"  << value << endl;
    }
};


void insertAthead(node* &head , int d)
{
    //new node create 
    node* temp = new node(d);
    temp -> next = head;
    head = temp; 
}

void insertAttail(node* &tail , int d)
{
    node* temp = new node(d);
    tail->next = temp ;
    tail = tail->next ;
}

void insertAtPosition(node* &head , node* &tail ,  int position , int d)
{
    
    // starting case ; 
    if(position == 1 )
    {
        insertAthead(head , d );
        return ;
    }

    node* temp = head;

    if( temp-> next == NULL)
    {
        insertAttail(head , d);
        return ;

    }
    
    int cnt = 1;
    while(cnt < position-1)
    {
        temp = temp -> next;
        cnt++;
    }

    // creating a node for d 
    node* insertAtPosition = new node(d);
    insertAtPosition -> next = temp -> next ;
    temp -> next = insertAtPosition;
}

void deleteNode(node* &head , int position)
{
    if(position == 1 )
    {
        node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp ;
    }
    else
    {
        node* curr=head;
        node* prev = NULL;

        int cnt = 1;
        while(cnt < position)
        {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev -> next = curr -> next ;
        curr->next=NULL;
        delete curr;
    }
}

void print(node* &head)
{
    node* temp = head;

    while(temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main()
{
    node* node1 = new node(10);
    // cout<< node1 -> data << endl;
    // cout<< node1 -> next <<endl;

    // // head pointed to node1 

    node* head = node1;
    node* tail = node1;
    
    print(head);
    insertAttail(head , 12);
    print(head);
    insertAttail(head , 15);
    print(head);
    
    insertAtPosition(head , tail , 2 , 45);
    print(head);

    cout << "head" << head -> data << endl;
    cout << "tail" << tail -> data << endl;

    deleteNode(head , 1 );
    print(head);
     
    return 0;
}