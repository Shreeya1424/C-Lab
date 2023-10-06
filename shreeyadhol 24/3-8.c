#include<stdio.h>
void main(){
	int i,n;
	printf("enter the value of n,i");
	scanf("%d %d",&n,&i);
	while (i<n){
		if(i%2==0){
			printf("%d\n",i);
		}
		i++;
	}
}

