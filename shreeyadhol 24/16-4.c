#include<stdio.h>
void main(){
	int r,c,i,j;
	scanf("%d %d",&r,&c);
	int a[r][c],b[r][c],x[r][c];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("enter value of a: ");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
				printf("enter value of b: ");
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		x[i][j]=a[i][j] + b[i][j];
		printf("%d\t",x[i][j]);
}
printf("\n");
}
}

