void evenAfterOdd(node* &head)
{
    node* odd=head;
    node* even=head->next;
    node* evenStart=even;

    while(odd->next != NULL && even->next != NULL)
    {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even=even->next;   
    }
    odd->next = evenStart;
    if(odd->next != NULL)
    {
        even->next==NULL;
    }
}


int main()
{
    node* head = NULL;
    int arr[] = {1,2,3,4,5,6};
    for(int i=0;i<6;i++)
    {
        insertAtTail(head,arr[i]);
    }
    display(head);
    evenAfterOdd(head);
    dispaly(head);
    return 0 ;
}