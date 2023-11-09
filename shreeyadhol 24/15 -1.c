#include<stdio.h>
void main(){
	int i,n;
	
	printf("enter arry element: ");
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[i]=a[i];
		}
		printf("arr[a]:\n");
		for(i=0;i<n;i++){
	printf("%d\n",a[i]);
	}
printf("\n");
	printf("arr[b]:\n");
for(i=0;i<n;i++){
	printf("%d\n",b[i]);
}
}

