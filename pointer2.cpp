#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	
	int a=20;
	int *p;
	p=&a;
	cout<<"Memory address of variable a is"<<p;
	cout<<"\n Value of a is "<<a;
	cout<<"\n *p returns "<<*p;
	
	return 0;
	getche();
}
