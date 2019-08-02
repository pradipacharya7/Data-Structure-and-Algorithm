#include<iostream>
using namespace std;
int fact(int n)
{
	if(n==0||n==1)
	return 1;
	
	else return(n*fact(n-1));
	
}
main()
{
	int n;
	cout<<"enter any +ve number";
	cin>>n;
	while(n<0)
	{
		cout<<"Invalid input \n Enter any +ve no.";
		cin>>n;
	}
	cout<<"factorial of "<<n<<" is \t"<<fact(n);
}
