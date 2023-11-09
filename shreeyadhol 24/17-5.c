#include<stdio.h>
void main(){
	int n,i;
	scanf("%d",&n);
	int a[n],*ptr;
	for(i=0;i<n;i++){
		printf("enter the value of a[%d]:",i);
		scanf("%d",&a[i]);
	}
		for(i=0;i<n;i++){
			ptr=&a[i];
			printf("%d ",*ptr);
		}
}

