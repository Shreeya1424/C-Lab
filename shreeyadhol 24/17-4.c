#include<stdio.h>
void main(){
	int x,y,*ptr1,*ptr2,temp=0;
	printf("Befor swap:");
	scanf("%d %d",&x,&y);
	ptr1=&x;
	ptr2=&y;
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
	printf("After swap = %d %d",*ptr1,*ptr2);
}

