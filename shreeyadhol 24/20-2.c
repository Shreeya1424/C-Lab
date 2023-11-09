#include<stdio.h>
struct book{
	float price;
	char author[100];
	char title[100];
	char publication[100];
};
void main(){
	int i;
	struct book b[3];
	for(i=0;i<3;i++){
		scanf("%f",&b[i].price);
		scanf("%s",b[i].author);
		scanf("\n%s",b[i].title);
		scanf("\n%s",b[i].publication);
	}
	for(i=0;i<3;i++){
		printf("%f\n",b[i].price);
		printf("%s\n",b[i].author);
		printf("%s\n",b[i].title);
		printf("%s\n",b[i].publication);
	}
}

