#include<stdio.h>
void main(){
	int i,j,n,a=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			if(a%2==0){
				printf("0");
			}
			else{
				printf("1");
			}
		a++;	
		}
		printf("\n");
	}

}

