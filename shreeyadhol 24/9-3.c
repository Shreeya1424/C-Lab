#include<stdio.h>
void main(){
	int x,y,i=1,ans=1;
	scanf("%d %d",&x,&y);
	while(i<=y){
		ans=ans*x;
		i++;
	}
	printf("%d",ans);
}
     
