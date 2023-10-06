#include<stdio.h>
void main(){
	int y,w,d;
	printf("enter the value of d");
	scanf("%d",&d);
	y=d/365;
	d=d%365;
	w=d/7;
	d=d%7;
	printf("%02d : %02d : %02d",y,w,d);
}
