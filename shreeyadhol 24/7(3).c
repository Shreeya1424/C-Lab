#include<stdio.h>
void main(){
	int a,b,ans;
	char c;
	printf("enter the value of int");
	scanf("%d %d",&a,&b);
	printf("enter a choice");
	scanf(" %c",&c);
	switch(c){
		case '+' :
			printf("a+b=%d",a+b);
			break;
			case '-' :
			printf("a-b=%d",a-b);
			break;
			case '*' :
			printf("a*b=%d",a*b);
			break;
			case '/' :
			printf("a/b=%d",a/b);
			if(b != 0){
				printf("a/b=%d",a/b);
			}
			else{
				printf("divid by  o is not valid");
			}
		break;
		default : 
		printf("Invalid");		
	}
}

