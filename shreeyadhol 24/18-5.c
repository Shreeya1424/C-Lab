#include<stdio.h>
void swap(int*a,int*b);
void swap2(int a,int b);
void main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("Befor: %d %d",a,b);
	swap(&a,&b);
	int temp =a;
	a=b;
	b=temp;
	swap2(a,b);
}
void swap(int*a,int*b){
	int temp =*a;
	*a=*b;
	*b=temp;
	printf("After: %d %d",*a,*b);
}


void swap2(int a,int b){
	int temp =a;
	a=b;
	b=temp;
	printf("After: %d %d",a,b);
}

