#include<conio.h>
#include<iostream>

using namespace std;

int fact(int n)
{
	if(n==1||n==0)
	return 1;
	else return n*fact(n-1);
}

int main()
{
	int n;
	cout<<" Enter any number";
	cin>>n;
	cout<<"\n Factorial of the given number is"<<fact(n);
	return 0;
	getche();
}
