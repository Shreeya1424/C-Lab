#include<stdio.h>
void main(){
	int n,avg,sum=0,count=0;
	while(1){
	scanf("%d",&n);
	if(n==0){
		break;
	}
	sum=sum+n;
	count=count+1;
}
avg=sum/count;
printf("sum=%davg=%d",sum,avg);
}
