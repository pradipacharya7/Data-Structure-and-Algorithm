#include<iostream>
#define n 5
using namespace std;

int linearsearch(int a[],int tar)
{
	int i;
	for(i=0;i<n;i++)
	if(a[i]==tar)
	return i;
	return -1;
	
}

main()
{
	int a[]={1,5,3,4,2},tar;
	
	cout <<"Enter element you want to search";
	cin>>tar;
	int index= linearsearch(a,tar);
	
	if(index==-1)
	{
		cout<<"Element not found";
	}
	else
	cout<<"Element found at index \t"<<index<<"\t"<<a[index];
}
