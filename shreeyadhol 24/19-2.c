#include<stdio.h>
void print  (int arr[],int n);
void main(){
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);

	}
	print(arr,n);
}
void print(int arr[],int n){
		for(int i=0;i<n;i++){
		printf("%d",arr[i]);
	
	}
}
