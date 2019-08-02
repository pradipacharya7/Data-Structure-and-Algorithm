#include<iostream>
#include<conio.h>
#define n 5
using namespace std;
int a[n];

void bubblesort()
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			swap(a[j],a[j+1]);
		}
	}
}
void display()
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<"\t"<<a[i];
	}
}
int main()
{
	int i;
	cout<<"\nEnter the elements of array::";
	for(i=0<i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\n"<<"Elements before sorting are::\n";
	display();
	bubblesort();
	cout<<"Elements after sorting are::"
	display();
}
