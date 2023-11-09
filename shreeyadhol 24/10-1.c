#include<stdio.h>
void main(){
	int n,first_digit,last_digit,sum;
	scanf("%d",&n);
	last_digit=n%10;
	while(n>=10){
		n=n/10;
}
	first_digit=n;
	sum=first_digit+last_digit;
	printf("sum=%d",sum);
}

