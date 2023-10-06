#include<stdio.h>
void main(){
	int h,m,s;
	printf("enter the value of int");
	scanf("%d",&s);
	h=s/3600;
	s=s%360;
	m=s/60;
	s=s%60;
	printf("%02d: %02d: %02d",h,m,s);
}
