#include<iostream>
#include<conio.h>

using namespace std;

struct person{
	string name;
	int id;
};

struct book{
	string name;
	int id;
}b;
int main()
{
	struct person p;
	p.name="ram";
	p.id=2;
	
	b.name="book1";
	b.id=5;
	
	cout<<p.name;
	cout<<"\n"<<p.id;
	
	cout<<"\n Book info";
		cout<<"\n"<<b.name;
	cout<<"\n"<<b.id;
	return 0;
}
