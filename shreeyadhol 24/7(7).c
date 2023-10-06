#include<stdio.h>
void main(){
	char ch;
	scanf(" %c",&ch);
	( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') )?printf(" %c is alphabet",ch):printf(" %c is not an alphabet");
}
