#include<stdio.h>
struct employee
{
	char name[100];
	int age;
	float salary;
};
void main(){
	struct employee e1={"shreeya",25,24000};
	struct employee e2={"krishna",26,25000};
	printf("%s\n",e1.name);
	printf("%d\n",e1.age);
	printf("%f\n",e1.salary);
	printf("%s\n",e2.name);
	printf("%d\n",e2.age);
	printf("%f\n",e2.salary);
}

