#include<stdio.h>
void main(){
	int i;
	char  key,a[100];
	gets(a);
	scanf("%c",&key);
	for (i=0;i<100;i++){
		if(a[i]==key){
			printf("index=%d",i);
			return;
		}
    }
    printf("not found");
}

