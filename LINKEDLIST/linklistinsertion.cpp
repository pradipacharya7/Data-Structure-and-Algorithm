#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node
{
  int data;
  struct Node *next;
};

 void print(struct Node * head) {
   struct Node* current = head;
    cout<<"\n\n**Elements in array**\n";
    while (current != NULL) {
        cout<<current->data<<"->";
        current = current->next;
    }
}

struct Node* insertLast(int data,struct Node* head)
{

    struct Node* new_node = new(struct Node);
    struct Node* current=head;
    if(new_node == NULL)
    {
        cout<<"Error creating a new node."<<endl;
        exit(0);
    }
    new_node->data = data;
    new_node->next=NULL;
    if(current==NULL)
    {
        current=new_node;
        return current;
    }
    while (current->next!= NULL) {
        current = current->next;
    }
    current->next = new_node;
    return head;
}

struct Node* insertFirst(int data,struct Node* head)
{
    struct Node* new_node = new(struct Node);
    if(new_node == NULL)
    {
        cout<<"Error creating a new node."<<endl;
        exit(0);
    }
    new_node->data = data;
    new_node->next=head;
    head=new_node;
    return head;
}

void insertAfter(int data,int searchKey,struct Node* head)
{
    struct Node* new_node = new(struct Node);
     struct Node* current=head->next;
    if(new_node == NULL)
    {
        cout<<"Error creating a new node."<<endl;
        exit(0);
    }
    new_node->data = data;
    while (current->data != searchKey&&current->next!=NULL) {
        current = current->next;
    }

    if(current->next==NULL)
    {
        cout<<"\nElement not found";
    }
    else
    {
        new_node->next=current->next;
        current->next=new_node;

    }
}
main()
{
    struct Node* head = NULL;
    head=insertLast(23,head);
    head=insertLast(24,head);
    head=insertLast(44,head);
    head=insertLast(22,head);
    head=insertLast(77,head);
    print(head);
    head=insertFirst(34,head);
    head=insertFirst(55,head);
    head=insertFirst(99,head);
    print(head);
    insertAfter(54,44,head);
    insertAfter(100,202,head);
    print(head);
}
