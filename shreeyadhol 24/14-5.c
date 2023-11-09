#include<stdio.h>
void main(){
	int i,count;
	float arr[5],h[5],w[5];
	for (i=0;i<5;i++){
		printf("enter the height of [%d]: ",i);
		scanf("%f",&h[i]);
		printf("enter the weight of [%d]: ",i);
		scanf("%f",&w[i]);
		if(h[i]>170&&w[i]<50){
		count++;
		}
	}
	printf("%d",count);
}

