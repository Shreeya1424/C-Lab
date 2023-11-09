#include<stdio.h>
int fact(int);
int fact2 (int a);
void main(){
	int a;
	scanf("%d",&a);
     int ans=fact(a);
	 printf("%d\n",ans);
    ans=fact2(a);
    printf("%d\n",ans);
}
int fact(int a){
	
	int ans=1,i;
	for(i=1;i<=a;i++){
		ans=ans*i;
	
	}
		return ans;
}
int fact2 (int a){
	if(a==0){
		return 1;
	}
	else{
		return a*fact2(a-1);
	}
}

