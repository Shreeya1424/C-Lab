#include<stdio.h>
void main(){
	char C;
	printf("enter the value of C");
	scanf("%c",&C);
	if(C=='a'||C=='e'||C=='i'||C=='o'||C=='u'||C=='A'||C=='E'||C=='I'||C=='O'||C=='U'){
		printf("%c is vowel",C);
	}
	else{
		printf("%cis consonant",C);
	}
}

