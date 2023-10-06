#include<stdio.h>
void main(){
	int a,b,c,ans;
	printf("enter the value of a,b,c");
	scanf("%d %d %d",&a,&b,&c);
	   int Max = a>b ? a : b;
	switch(Max){
		default :
			ans = Max*c;
			printf("%d",ans);	
	}
}
