#include<stdio.h>
void main(){
	int *ptr1,x;
	int *ptr2,y;
	int sum=0;
	scanf("%d %d",&x,&y);
	ptr1=&x;
	ptr2=&y;
	sum=*ptr1+*ptr2;
	printf("sum=%d",sum);
}
