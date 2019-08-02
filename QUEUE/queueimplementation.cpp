#include<iostream>
#include<conio.h>
#include<stdlib.h>
#define MAX 50
using namespace std;
int queue_array[MAX];
int rear = - 1;
int front = - 1;
void enqueue()
{
    int add_item;
    if (rear == MAX - 1)
   cout<<"Queue Overflow \n";
    else
    {
        if (front == - 1) /*If queue is initially empty */
        front = 0;
        cout<<"Inset the element in queue : ";
        cin>>add_item;
        rear = rear + 1;
        queue_array[rear] = add_item;
    }
} /*End of Enqueue()*/
 
 void dequeue()
{
    if (front == - 1 || front > rear)
    {
        cout<<"Queue Underflow \n";
       
    }
    else
    {
       cout<<"Element deleted from queue is \n"<< queue_array[front];
        front = front + 1;
    }
} /*End of dequeue() */

void queue_front()
{
	if (front == - 1)
        cout<<"Queue is empty \n";
        else
		{
			cout<<"Front is \n"<<queue_array[front]<<"\n";
		}
	
}
void display()
{
    int i;
    if (front == -1)
        cout<<"Queue is empty \n";
  
	else
    {
        cout<<"Queue is : \n";
        for (i = front; i <= rear; i++)
            cout<<queue_array[i]<<"\t";
        cout<<"\n";
    }
} /*End of display() */
int main()
{
	int choice;
    
    while (1)
    {
        cout<<"\n1.Insert element to queue \n";
        cout<<"2.Delete element from queue \n";
        cout<<"3.Front of queue \n";
        cout<<"4.Display all elements of queue \n";
        cout<<"5.Quit\n";
        cout<<"Enter your choice:";
        cin>>choice;
        switch (choice)
        {
            case 1:
            enqueue();
            break;
            case 2:
           dequeue();
            break;
            case 3:
            queue_front();
            break;
            case 4:
            display();
            break;
            case 5:
            exit(1);
            default:
            cout<<"Wrong choice \n";
        } /*End of switch*/
    } /*End of while*/
return 0;
getche();
} /*End of main()*/
