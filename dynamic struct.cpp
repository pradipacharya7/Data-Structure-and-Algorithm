#include<iostream>
#include<conio.h>
using namespace std;
struct test{
	int a,b;
	
};

main(){
	struct test t;
	struct test *x=new (test);
	x->a=5;
	cout<<x->a;
	
}
