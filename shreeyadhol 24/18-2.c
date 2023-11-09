#include<stdio.h>
void fun(int a, int b);
void main(){
	int a,b;
	scanf("%d %d",&a,&b);
	fun(a,b);
}
void fun (int a, int b){
	if(a>b){
		printf("max=%d",a);
		printf("min=%d",b);
	}
	else{
		printf("max=%d",a);
		printf("min=%d",b);
}
}


