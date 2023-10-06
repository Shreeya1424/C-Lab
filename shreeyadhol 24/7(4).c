#include<stdio.h>
void main(){
	int a,b,c, Max;
	printf("enter the value of a,b,c");
	scanf("%d %d %d",&a,&b,&c);
	Max = a>b ? a : b;
	Max =c>Max ? c : Max;
	printf("%d is largest",Max);
	
}
