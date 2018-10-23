#include<stdio.h>

int main(){
	float x,y = 0;
	
	printf("Informe o valor p/ x:");
	scanf("%f",&x);
	printf("Informe o valor p/ y:");
	scanf("%f",&y);
	
	if(x==0 && y==0){
		printf("Origem");
	}else{
		if(y==0 && x!=0)
			printf("Eixo X");
		if(y!=0 && x==0)
			printf("Eixo Y");
		if(y<0 && x<0)
			printf("Q3");
		if(y>0 && x>0)
			printf("Q1");
		if(y>0 && x<0)
			printf("Q2");
		if(y<0 && x>0)
		    printf("Q4");
	}
	
return 0;
}
