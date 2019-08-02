#include<iostream>
using namespace std;
struct Node
{
  int data;
  struct Node *next;
};
struct Node* head = NULL;



 void print() {
   struct Node* current = head;
    cout<<"\n\n**Elements in array**\n";
    while (current != NULL) 
	{
        cout<<current->data<<"->";
        current = current->next;
    }
}
struct Node* insertFirst(int data)
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
main()
{
    
  	int x,d;
  	cout<<"\n Enter how many Datas";
  	cin>>x;
  	
  	for(int i=0;i<x;i++){
  		cout<<"\n"<<"Enter data";
  		cin>>d;
  		head=insertFirst(d);
	  }



  	print();
  }


  		
