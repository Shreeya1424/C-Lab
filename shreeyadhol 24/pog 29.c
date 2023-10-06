#include<stdio.h>
void main(){
	float a,b,c;
	printf("enter the value of a,b,c");
	scanf("%f %f %f",&a,&b,&c);
			if(a==b && b==c){
				printf("equilateral triangle");
			}
			else if (a==b || b==c || a==c){
				printf("isosceles triangle");
			}
			else if ((a*a)==(b*b)+(c*c) || 
					(b*b)==(a*a)+(c*c)||
					(c*c)==(a*a)+(b*b)) {
				printf("right triangle");
			}
			else {
				printf("scalene triangle");
			}
}

