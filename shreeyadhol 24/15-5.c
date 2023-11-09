#include<stdio.h>
#include<string.h>
	void main(){
		char str[1000];
		int length=0,i;
		scanf("%s",str);
		for(i=0;str[i]!='\0';i++){
			length++;
		}
		printf("%d\n",length);
		printf("%s",str);
	}
