#include<stdio.h>
void main(){
	int *ptr,x=10;
	ptr=&x;
	printf("address=%d\n",ptr);
	printf("value=%d",*ptr);
}
