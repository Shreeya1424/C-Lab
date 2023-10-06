#include<stdio.h>
void main (){
	int a,b,ans;
	char choice;
	printf("enter the value of int");
	scanf("%d %d",&a,&b);
	printf("enter a choice (+ for add,- for sub,* for mul,/ for divi)");
	scanf(" %c",&choice);
	if (choice=='+'){
		printf("Addition of numbers are : %d",a+b);
	}
	else if (choice=='-'){
		printf(" subtraction of numbers are : %d",a-b);
	}
	else if (choice=='*'){
		printf("multi of numbers are : %d",a*b);
		
	}
	else if (choice=='/'){
		if(b==0){
		printf("invalid");
		}
		else{
			printf("divi of numbers are : %d",a/b);
		}
	
	}
	else {
		printf("invalid choice");
	}	
}

