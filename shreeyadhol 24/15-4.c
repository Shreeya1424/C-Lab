#include<stdio.h>
void main(){
	int i,n,key;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		}
	scanf("%d",&key);
	for (i=0;i<n;i++){
		if(arr[i]==key){
			printf("index=%d",i);
			return;
		}
	}
	printf("not found");
}

