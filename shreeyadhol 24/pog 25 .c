#include<stdio.h>
void main(){
	int n,last_digit;
	printf("enter a number : ");
	scanf("%d",&n);
	last_digit=n%10;
	if(last_digit%2==0){
		printf("last_digit is even %d",last_digit);
	}
	else{
		printf("last_digit is odd %d",last_digit);
	}
}

