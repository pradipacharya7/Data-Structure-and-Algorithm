#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a=20;
	int *ip;
	ip=&a;
	
	cout<<"\n Value of a is \t"<<a;
	cout<<"\n Pointer points to address \t"<<ip;
	cout<<"\n Pointer points to variable a with value"<<*ip;
	

	
	getche();
	return 0;
} 
