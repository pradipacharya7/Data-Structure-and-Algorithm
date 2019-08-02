#include<iostream>
using namespace std;
#define n 5
int a[n];

void insertionsort()
{
	int temp;
	
	for(int i=0;i<n;i++)
	{
		temp=a[i]; 
		int j=i;
		while(j>0 && temp<a[j-1])
		{
			a[j]=a[j-1];
			j=j-1;
		}
		a[j]=temp;
	}
}

void display()
{
	
	for(int j=0;j<n;j++)
	{
		cout<<a[j];
		cout<<"\n";
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
	
	display(a,n);

	insertionsort(a,n);
	cout<<" Values after sorting are";
	cout<<"\n";
	display(a,n);
	
}
