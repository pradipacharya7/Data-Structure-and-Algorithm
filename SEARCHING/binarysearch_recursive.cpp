#include<iostream>
using namespace std;
#define n 5

int binarysearch(int a[],int tar ,int l, int r)
{
	while(l<=r)
	{
	int mid= (l+r)/2;
	if(a[mid]==tar)
	return mid;
	
	if(a[mid]>tar)
	return binarysearch(a,tar,l,mid-1);
	
	return binarysearch(a,tar,mid+1,r);	
	}
	return -1;
}

main()
{
	int a[n],i,tar,index,l,r;
	cout<<"Enter elements of array \n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	cout<<"\n Enter the element to be searched.";
	cin>>tar;
	index= binarysearch(a,tar,0,n-1);
	
	if(index==-1)
	
	cout<<"Element not found";
	else cout<<"Element \t "<<a[index]<<"\t is at index \t"<<index;
	
}
