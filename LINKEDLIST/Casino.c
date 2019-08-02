#include<stdio.h>
#include<stdlib.h>
int spin();
int main()
{
	int a,c,diff,prize;
	printf("WElcome to Anup's Casino\n");
	printf("Enter the number of your choice from 1 to 30 \n");
	scanf("%d",&a);
    c=spin();
    printf("the number you got is %d\n",c);
	if (c==a)
	{
		printf("Congratulation You have won 100000\n");
	}
	
	else
	{
		diff=c-a;
		prize= 100000-abs(diff)*10000;
		printf("Congratulation You have won %d",prize);
	}
	
}

int spin()
{
	int b;
	b= rand()%30+1;
	return b;
}

