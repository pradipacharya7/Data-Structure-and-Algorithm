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
	cout<<"\n\n**Elements in array**\n";
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
	
	if(n==1)
	{
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
void delete()
{
	struct node temp1=head;
	
	if(n==1)
	{
		temp1=temp1->next;
		delete temp1;
	}
	
	 
}
int main(){
	insert(2,1);
	insert(3,2);
	
	print();
	getche();
}

