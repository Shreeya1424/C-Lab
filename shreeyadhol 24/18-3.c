#include<stdio.h>
void I(float,float,float);
void main(){
	float p,r,n;
	scanf("%f %f %f",&p,&r,&n);
	I(p,r,n);
}
void I(float p,float r,float n){
	float I=(p*r*n)/100;
	printf("I=%f",I);
}
