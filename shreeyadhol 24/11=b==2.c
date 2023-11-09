#include<stdio.h>
void main(){
	int rem,n,i;
	int arr[10]={0};
	
	scanf("%d",&n);
	while (n>0){
		rem=n%10;
		arr[rem]++;
		n/=10;
	}
	for(i=0;i<10;i++){
		printf("frequency of %d=%d\n",i,arr[i]);
	}
}

