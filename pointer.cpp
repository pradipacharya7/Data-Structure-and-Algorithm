#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int a=20, b[5],*pa[5];
	int i;
	
	int *p;
	
	p= &a;
	
	cout<<"\n Memory Value is "<<p;
	
	cout<<"\n value at pointer is \n"<< *p;
	
	for(i=0;i<5;i++){
		cout<<"\n enter the element \n";
		cin>>b[i];
	}
	
		cout<<" \n Values of array are:";
	
		for(i=0;i<5;i++){
	
		cout<<b[i]<<"\n";
	}
//	for(i=0;i<5;i++)
//	
//	{
//		cout<<p;
//	 } 
	
	getche();
	return 0;
}
