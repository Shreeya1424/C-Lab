#include<stdio.h>
void main(){
	int a,b,c;
	printf("enter the value of a,b,c");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		if(a>c){
			printf("%d is max",a);
		}
		else{
			printf("%d is largest",c);
		}
	}
	else{
		if(b>c){
			printf("%d is max",b);
		}
		else{
			printf("%d is largest",c);
		}
	}
	
}

