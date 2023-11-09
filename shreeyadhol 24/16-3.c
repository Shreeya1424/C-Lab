#include<stdio.h>
void main(){
	int i,j,arr[20][2];
	for(i=0;i<20;i++){
		for(j=0;j<2;j++){
			if(j==0){
				printf("roll no");
				scanf("%d",&arr[i][j]);
			}
			else{
				printf("mark");
				scanf("%d",&arr[i][j]);
			}
		}
	} 
	for(i=0;i<20;i++){
		for(j=0;j<2;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");	
	}

}
