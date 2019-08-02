#include<stdio.h>
#include<conio.h>

void sum(int a, int b)
{
	int sum= a+b;
	printf("Sum is %d", sum);
}

int main()
{
	int a,b;
	printf("Enter two numbers::??");
	scanf("%d%d",&a,&b);
	sum(a,b);
	return 0;
	getche();
	
}
