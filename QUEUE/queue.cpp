#include<iostream>
#include<conio.h>
#define size 5
using namespace std;
int a[size],front=-1,rear=-1;

void enqueue(int value)
{
if(rear==size-1)
cout<<"Queue overflow";
else
{
	if(front==-1)
	front++;
	rear++;
	a[rear]=value;

	
}	
}
void dequeue()
{
	if(front==-1)
	cout<<"Queue underflow";
	else
	{
		front++;
	}
}
void front_item()
{
	if(front==-1)
	cout<<"Queue underflow";
	else
	cout<<"\n Front Item is::"<<a[front];
}

void display()
{
	if(front==-1)
	cout<<"Queue is empty";
 int i;
	for(i=front;i<=rear;i++)
	{
		cout<<"\t "<<a[i];
	}
}

int main()
{
	int choice,i,value;
	do{
		cout<<"\nEnter your choice\n1.Enqueue\n2.Dequeuet\n3.Front\n4.Display";
		cin>>choice;
		if(choice==1)
		{
			cout<<"\n Enter the vlaue you wanat to enqueue::";
			cin>>value;
			enqueue(value);
		}
		if(choice==2)
		{
			
			dequeue();
		}
		if(choice==3)
		{
			
	front_item();		
	}
	if(choice==4)
	{
		display();
		}
		if(choice>=5)
		{
			cout<<"\nSorry! Wrong chioce..";
			exit(0);
			
		}	
		
	}
	
	while(choice!=5);
	cout<<"exiting...";
	getche();
	return 0;
}
