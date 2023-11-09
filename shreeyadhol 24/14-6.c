#include<stdio.h>
void main(){
	int i,n,sum=0,count=0;
	scanf("%d",&n);
	int arr[n];
	float avg=0;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
		avg=sum/n;
		for(i=0;i<n;i++){
		if(arr[i]>avg){
			count++;
		}
	}
	
	printf("%d",count);
}

