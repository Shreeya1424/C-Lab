#include<stdio.h>
void main(){
	int *ptr1,x=10;
	float *ptr2,y=2.120;
	double *ptr3,z=23.452;
	char *ptr4,w='A';
	ptr1=&x;
	ptr2=&y;
	ptr3=&z;
	ptr4=&w;
	printf("address=%d\n",ptr1);
	printf("value=%d\n",*ptr1);
	printf("address=%d\n",ptr2);
	printf("value=%f\n",*ptr2);
	printf("address=%d\n",ptr3);
	printf("value=%lf\n",*ptr3);
	printf("address=%d\n",ptr4);
	printf("value=%c\n",*ptr4);
}

