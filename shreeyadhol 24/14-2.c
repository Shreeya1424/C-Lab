#include<stdio.h>
void main(){
	int i,n,pos,neg;
	scanf("%d",&n);
	int arr[n];
	pos=0;
	neg=0;
	for (i=0;i<n;i++){
		printf("enter arr element : ");
		scanf("%d",&arr[i]);
	}
	for (i=0;i<n;i++){
		if(arr[i]>0){
			pos++;
		}
		else if (arr[i]<0){
			neg++;
		}	
	}
	printf("pos=%d,neg=%d",pos,neg);
}

