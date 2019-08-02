 //stack basic operations 

#include<iostream>
#include<conio.h>
using namespace std;
#define size 100
int top=-1,a[size];
void PUSH(int value)
{
      if(top==size-1)
    {
        cout<<"\n Stack is Full or overflow!\n";
    }
    else
    {
        top++;
        a[top]=value;
    } 
}
void POP()
{
    if(top==-1)
    {
        cout<<"\n stack is Empty or underflow!\n";
    }
    else
    {
        top--;
        cout<<"Value poped sucessfully!";
    }
}

void TOP()
{
	 if(top==-1)
    {
        cout<<"\n nothing to display !\n";
    }	
    else
    {
    	cout<<"\t"<<a[top];
	}
}
void Display()
{
    if(top==-1)
    {
        cout<<"\n nothing to display !\n";
    }
    else
    {
        cout<< "\n Array Elements are ::  \n";
        for(int i=0;i<=top;i++)
        {
            cout<<"\t"<<a[i];
        }
    }
}

int main()
{
    int value, choice;
    do{
        cout<<"\n 1.Push \n 2.Pop \n 3.TOP \n 4.Display \n 5.Exit\n \n Input Choice:";
        cin>>choice;

        if(choice==1)
        {
            cout<<"\n Enter a value";
            cin>> value;
            PUSH(value);
        }
        if(choice==2)
        {
            POP();
        }
        if(choice==3)
        {
        	TOP();
		}
        if(choice==4)
        {
            Display();
        }
        if(choice==5)
        {
        	cout<<"\n\n\n Exiting......\n";
        	exit(0);
		}
    }
    while(choice!=5);
    
    getch();
    return 0;
}
