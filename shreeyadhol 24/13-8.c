#include<stdio.h>
void main(){
	int i,j,n,a=1;
	char ch='A';
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			if(i%2==1){
				printf("%d ",j);
			}
			else{
				printf("%c ",ch);
				ch++;
			}
		}
		printf("\n");
	}
	}


