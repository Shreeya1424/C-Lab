#include<stdio.h>
void main(){
	char a[100],s, key;
	gets(a);
	scanf("%c\n%c",&s,&key);
	int i;
	for(i=0;i<100;i++){
		if(a[i]==s){
			a[i]=key;
		}
	}
	printf("%s",a);
}

