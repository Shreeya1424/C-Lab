#include<stdio.h>
void main(){
	float P,R,N,I;
	printf("enter value of P");
	scanf("%f",&P);
	printf("enter value of R");
	scanf("%f",&R);
	printf("enter value of N");
	scanf("%f",&N);
	I = (P*R*N)/100;
	printf("%f",I);
}
