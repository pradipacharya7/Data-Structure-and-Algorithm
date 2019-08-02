#include<iostream>
#include<conio.h>
#define MAX 5

using namespace std;
int ch, front = -1, rear = -1;
int q[MAX], item;

void enqueue()
{
if( (front == rear + 1) || (front == 0 && rear == MAX-1))
cout<<"\nQueue is Full";
else {
if(front == -1) front = 0;
rear = (rear + 1) % MAX;
q[rear]=item;
}
}
void dequeue()
{
if(front == -1)
cout<<"\nQueue is Empty";
else
{
item=q[front];
if (front == rear)
{
front = -1;
rear = -1;
}
else 
{

front = (front + 1) % MAX;
}
cout<<"\nDeleted item is:"<<item;
}
}
void display()
{
int i, f=front, r=rear;
if(front == -1)
cout<<"\nQueue is Empty";
else if(r>f)
{
cout<<"\nContents of Queue is:\n";
for(i=f; i<=r; i++)
{
cout<<"\t"<<q[i];
f = (f + 1) % MAX;
}
}
else
{
	cout<<"\nContents of Queue is:\n";
	for(i=f;i<MAX;i++)
	{
	cout<<"\t"<<q[i];	
	}
	for(i=0;i<=r;i++) 
	{
	cout<<"\t"<<q[i];	
	}

 
 
 }
}


int main()
{

do
{
cout<<"\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit";
cout<<"\nEnter the choice: ";
cin>> ch;

switch(ch)
{
case 1: 
cout<<"\nEnter any value / item to be inserted:";
cin>> item;
enqueue();
break;

case 2: 
dequeue();
break;

case 3:
 display();
break;

case 4: 
exit(0);
break;
}
}while(ch!=4);
return 0;
getche();

}

