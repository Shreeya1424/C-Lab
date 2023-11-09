#include<stdio.h>
void main(){
	int i,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		printf("arr[%d]=%d\n",i,arr[i]);
	}
	printf("\n");
	for(i=n;i>=0;i--){
		printf("arr[%d]=%d\n",i,arr[i]);
	}
}

