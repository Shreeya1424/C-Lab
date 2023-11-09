#include<stdio.h>
#include<string.h>
 void main(){
 	char s1[100],s2[1000];
 	gets(s1);
 	gets(s2);
 	
 	printf("length of string1: %d", strlen(s1));
 	printf("length of string2: %d\n", strlen(s2));
 	if(strcmp(s1,s2)==0){
 		printf("string is same");
	 }
	 else{
	 	printf("string is not same\n");
	 }
	 strcpy(s1,s2);
	 printf("copy:%s",s1);
	 strcat(s1,s2);
	 printf("concatination:%s\n",s1);
	 strrev(s1);
	 printf("reverse:%s\n",s1);
	 strrev(s2);
	 printf("reverse:%s\n",s2);
	 strlwr(s1);printf("lwr:%s\n",s1);
	 strlwr(s2);
	 printf("lwr:%s\n",s2);
	 strupr(s1);
	 printf("upr:%s\n",s1);
	 strupr(s2);
	 printf("upr:%s\n",s2);
 }
 
