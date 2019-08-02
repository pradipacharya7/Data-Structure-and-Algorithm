#include<stdio.h> 

void prime_range(int low,int high);
int main(){
	int i,low,high,j;
	printf("Enter the range low to high:\n");
	scanf("%d%d",&low,&high);
	
	prime_range(low,high);
	return 0;	
}

void prime_range(int low,int high){
	int i,j;
	for(j=low;j<=high;j++){
		for(i=2;i<=j;i++){
		if(j%i==0){
			break;
		}
	}
	if(j==i){
		printf("%d is prime:\n",j);
	}
	}
	
} 
