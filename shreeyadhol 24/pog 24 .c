#include<stdio.h>
void main(){
	char ch;
	scanf("%c",&ch);
	if(ch>='a'&&ch<='z'){
		printf("lower case alphabates");
	}
	else if (ch>='A'&&ch<='Z'){
		printf("upercase");
	}
	else if (ch>='0'&&ch<='9'){
		printf("digits");
	}
	else{
		printf("special symbols");
	}
}
