#include<stdio.h>
void main(){
	float a,b,temp;
	printf("enter the value of a,b");
	scanf("%f %f",&a,& b);
	temp =a;
	a=b;
	b=temp;
	printf("%f %f",a,b);
}
	
