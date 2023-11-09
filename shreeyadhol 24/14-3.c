#include<stdio.h>
void main(){
	int i,n,even,odd;
	scanf("%d",&n);
	int arr[n];
	even=0;
	odd=0;
	for (i=0;i<n;i++){
		printf("enter arr element: ");
		scanf("%d",& arr[i]);
	}
	for (i=0;i<n;i++){
		if (arr[i]%2==0){
			even++;
		}
		else {
			odd++;
		}
	}
	printf("even=%d,odd=%d",even,odd);
}
