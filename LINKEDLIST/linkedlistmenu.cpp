#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

struct Node
{
  int data;
  struct Node *next;
};

struct Node* head = NULL;

void print()
{
	struct Node* temp= head;
	cout<<"\n\n**Elements in linked list are**\n";
	while(temp!=NULL)
	{
		cout<<temp->data<<"->";
		temp = temp->next;
	}
	cout<<"\n";
}

void insert(int data,int n)
{
	Node* temp1= new(struct Node);
	temp1->data=data;
	temp1->next=NULL;
	
	if(n==1){
			temp1->next=head;
			head=temp1;
			return;
	}
	Node* temp2=head;
	for(int i=0;i<n-2;i++){
		temp2=temp2->next;
	}
	temp1->next=temp2->next;
	temp2->next=temp1;
	
}
void deteteNode(int n){
	struct Node*temp1=head;
	if(n==1)
	{
	
	head=temp1->next;
	delete temp1;
		return;
}
	int i;

	for(int i=0;i<n-2;i++)
	{
		temp1=temp1->next;
	}
		

	struct Node* temp2=temp1->next;
	temp1->next=temp2->next;
	delete temp2;
	

}
int main(){
	int n;
	int choice,value;
	
	do{
	cout<<"\nEnter your Choice: \n1.Insertion \n2.Deletion \n3.Display \n4.Exit ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"enter the value and node";
			cin>>value>>n;
			insert(value,n);
			break;
		case 2:
			cout<<"enter the node";
			cin>>n;
			deteteNode(n);
			break;
			
		case 3:
			print();
			break;
			
		case 4:
			exit(0);
			
		default:
			cout<<"\nInvalid choice!!!";
				
	}
	
	
}
while(choice!=0);
cout<<"Exiting";
	getche();
}

