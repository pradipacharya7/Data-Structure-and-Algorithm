#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#define MSGBUF 16

char *msg1 = "hello1";
char *msg2 = "hello2";
char *msg3 = "hello3";
int main(){
	char buf[MSGBUF];
	int f[2],i;
	
	printf("%d",pipe(f));
	
	
}
