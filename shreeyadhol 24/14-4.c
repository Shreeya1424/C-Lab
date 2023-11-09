#include<stdio.h>
void main(){
	int i,n,sum=0,avg=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("enter arr element: ");
		scanf("%d",&arr[i]);
	}
	 int max=arr[0],min=arr[0];
	for (i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
		if(arr[i]<min){
			min=arr[i];
		}
		sum=sum+arr[i];
		avg=sum/n;
	}
	printf("max=%d min=%d sum=%d avg=%d",max,min,sum,avg);
}

