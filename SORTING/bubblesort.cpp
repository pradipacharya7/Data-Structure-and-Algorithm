#include<iostream>
#include<conio.h>
#define n 5
using namespace std;
int a[n];

void bubblesort()
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
			swap(a[j],a[j+1]);
			}
		}
	}
}
void display()
{
	
	for(int j=0;j<n;j++)
	{
		cout<<a[j]<<"\n";
//		cout;
	}
}

 main(){
	int i,j;
	cout<<"Enter values of array";
	cout<<"\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\n";
	cout<<" Values before sorting are";
	
	display();

	bubblesort();
	cout<<" Values after sorting are";
	cout<<"\n";
	display();
	
}
