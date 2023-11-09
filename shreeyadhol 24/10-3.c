#include<stdio.h>
void main(){
	int n,i=1,count=0;
	scanf("%d",&n);
	while(i<=n){
		if(n%i==0){
			count=count+1;
		}
		i++;		
	}
	if(count==2){
		printf("prime");
	}
	else{
		printf("not prime");
	}
}
