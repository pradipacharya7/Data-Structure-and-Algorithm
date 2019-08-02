#include<iostream>
#include<conio.h>
#include<stdlib.h>
#define SIZE 5
using namespace std;
int q[SIZE],front=0,rear=0;
int main()
{
int ch;
void enqueue();
void dequeue();
void display();

while(1)
{
cout<<"\n 1. Add element";
cout<<"\n 2. Remove element";
cout<<"\n 3.Display";
cout<<"\n 4.Exit";
cout<<"\n Enter your choice:";
cin>>ch;

switch(ch)
{
case 1:
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
default:
cout<<"\n Invalid choice";
}
}
}
void enqueue()
{
int no;
if (rear==SIZE && front==0)
cout<<"Queue is full";
else
{
cout<<"Enter the num:";
cin>>no;
q[rear]=no;
}
rear++;
}
void dequeue()
{
int no,i;
if (front==rear)
cout<<"Queue is empty";
else
{
no=q[front];
front++;
cout<<"\n"<<no<<" -removed from the queue\n";
}
}
void display()
{
int i,temp=front;
if (front==rear)
cout<<"The queue is empty";
else
{
cout<<"\n Element in the queue:";
for(i=temp;i<rear;i++)
{
cout<<q[i]<<" ";
}
}
}
