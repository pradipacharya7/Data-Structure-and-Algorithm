#include<iostream>
#include<conio.h>
#include<ctype.h>
#include<string.h>
using namespace std;
char a[20];
int top = -1;
void push(char x)
{
	a[++top] = x;
}

char pop()
{
	if(top == -1)
		return -1;
	else
		return a[top--];
}

int priority(char x)
{
	if(x == '(')
		return 0;
	if(x == '+' || x == '-')
		return 1;
	if(x == '*' || x == '/')
	return 2;
}

int main()
{
	char exp[20];
	char x,ch;
	int n;
	
	cout<<"Enter any expression";
	cin>>exp;
	n=strlen(exp);
	for(int i=0;i<n;i++)
	{
		ch=exp[i];
		if(isalnum(ch))
			
	
		cout<<ch;
		else if(ch == '(')
			push(ch);
		else if(ch == ')')
		{
			while((x = pop()) != '(')
			cout<<x;
		}
		else
		{
		while(priority(a[top]) >= priority(ch))
			cout<<pop();
			
			push(ch);
		} 
	}
	while(top != -1)
	{
		cout<<pop();
	}
	getche();
	return 0;
}
