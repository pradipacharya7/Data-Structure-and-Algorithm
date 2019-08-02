#include<stdio.h>
void guess(int x);
int calculate(int num);
int main(){
	int a = 10,res;
	guess(a);
	res = calculate(a);
	if(res==-1){
		printf("You did not choose ");
	}
	else{
		printf("Result=%d",res);
	}
	return 0;
}

void guess(int x){
	int user_num;
	printf("Enter a number of your choice:\n");
	scanf("%d",&user_num);
	if(user_num==x){
		printf("You guessed right:\n");
	}
	else{
		printf("You guessed wrong:\n");
	}
}

int calculate(int num){
	char choice;
	int res;
	printf("Press a::ADD m::Multiply:\n");
	scanf("%c",&choice);
	if(choice=='a'){
		res = num+2;
		return res;
	}
	else if(choice=='m'){
		res = num*2;
		return res;
	}
	else{
		return -1;
	}
	
}
