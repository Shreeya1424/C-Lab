#include<stdio.h>
void main(){
	int n,i,j;
	float fact=1,sum=1;
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		fact=1;
		for(j=1;j<=i;j++){
		fact=(fact*j);
		}
		sum=sum+(1/fact);
	}
	printf("%f",sum);
}

