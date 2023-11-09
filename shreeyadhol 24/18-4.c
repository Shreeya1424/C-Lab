#include<stdio.h>
float max (float,float,float);
void main(){
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
     float ans = max(a,b,c);
     printf("%f",ans);
}
float max(float a,float b,float c){
	if(a>b){
		if(a>c){
			return a;
		}
		else{
			return c;
		}
	}
		else{
			if(b>c){
				return b;
			}
			else{
			return c;
			}
		}
	}
	
