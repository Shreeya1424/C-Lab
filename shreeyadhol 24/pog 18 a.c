#include<stdio.h>
void main(){
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
	if((n|1)>n){
		printf("%d is even",n);
	}
	else{
		printf("%d is odd",n);
	}
}


