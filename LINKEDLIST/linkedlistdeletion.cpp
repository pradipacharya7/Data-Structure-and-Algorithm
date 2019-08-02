#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node
{
  int data;
  struct Node *next;
};




void print(struct Node * head) {
   //struct Node* current = head->next;
    //printf("\n\n**Elements in array**\n");
    head=head->next;
    cout<<"\n**Elements in array**\n";
    while (head != NULL) {
        cout<<head->data<<"->";
        head = head->next;
    }
}

void deleteFirst(struct Node* headRef)
{
    if(headRef->next==NULL)
    {
        cout<<"List is empty";
        return;
    }
    struct Node *temp=(headRef->next);
    (headRef->next)=(headRef)->next->next;
    cout<<"\n\nDeleted:"<<temp->data<<endl;
    delete(temp);
}

void deleteFirstNode(struct Node** headRef)
{
    if((*headRef)->next==NULL)
    {
        cout<<"List is empty";
        return;
    }
    struct Node *temp=(*headRef)->next;
    (*headRef)->next=(*headRef)->next->next;
    cout<<"\n\nDeleted:"<<temp->data<<endl;
    delete(temp);
}

void deleteLast(struct Node *headRef)
{
    if((headRef)->next==NULL)
    {
        cout<<"\nList empty";
//        return NULL;
    }
    else
    {
        struct Node* temp = (headRef);
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        cout<<"\nDeleted:"<<temp->next->data<<endl;
        delete(temp->next);
        temp->next=NULL;
    }

}

void deleteNode(struct Node *headRef, int key)
{
    // Store head node
    struct Node* temp = (headRef)->next;

    if(temp==NULL)
    {
        cout<<"List is empty";
    }
    // If head node itself holds the key to be deleted
    else if (temp != NULL && temp->data == key)
    {
        headRef = temp->next;   // Changed head
        free(temp);               // free old head
        return;
    }
    else
    {
        // Search for the key to be deleted, keep track of the
        // previous node as we need to change 'prev->next'
        while (temp->next != NULL && temp->next->data != key)
        {
            temp = temp->next;
        }

        // If key was not present in linked list
        if (temp->next == NULL)
        {
            cout<<"\n Data not found";
            return;
        }

        cout<<"\n"<<temp->next->data<<" has been deleted";
        free(temp->next);  // Free memory
        temp->next=temp->next->next;
    }

}

main()
{
    struct Node* head = new(struct Node);
    head->next=NULL;
    deleteFirst(head);
    
    print(head);

    

}
