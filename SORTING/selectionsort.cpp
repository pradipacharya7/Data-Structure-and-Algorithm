#include<iostream>
#include<conio.h>
#define n 5

using namespace std;
int a[n];
void selectionsort( )
{
	int i,j,min;
	
	for(i=0;i<n-1;i++)
	{
	
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			min=j;
			
			
		}
		swap(a[min],a[i]);
	}
}
void display()
{
	for (int i=0;i<n;i++)
	{
		cout<<"\n"<< a[i];
	}
}

int main()
{
	cout<<"PLease enter the elements of array"<<"\n";
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Values Before sorting are"<<"\n";
	display();
	selectionsort();
	cout<<"\n"<<"Values After sorting are"<<"\n";
	display();
	getche();
	return 0;		
}
