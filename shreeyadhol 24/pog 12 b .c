#include<stdio.h>
void main(){
	float a,b;
	printf("enter the value of a,b");
	scanf("%f %f",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("%f %f",a,b);
}
	
