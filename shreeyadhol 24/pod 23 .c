#include<stdio.h>
void main (){
	float basic_salary,HRA,DA,gross_salary;
	printf("basic_salary");
	scanf("%f",&basic_salary);
	if(basic_salary>=30000)
	{
	
	HRA=0.3*basic_salary;
	DA=0.95*basic_salary;
}
 else if(basic_salary>=20000)
	{
	
	HRA=0.25*basic_salary;
	DA=0.90*basic_salary;
}
 else if(basic_salary>=10000)
	{
	
	HRA=0.20*basic_salary;
	DA=0.80*basic_salary;
}
gross_salary = basic_salary + HRA + DA;
printf("gross_salary : %f",gross_salary);	
}

