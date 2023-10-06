#include<stdio.h>
void main(){
	int a,b;
	printf("enter the value of a,b");
	scanf("%d %d",&a,&b);
	 int ans = a^b;
	switch(ans){
		case 0:
			printf("equal");
			break;
			default :
				printf("not equal");
	}
}
