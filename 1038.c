#include<stdio.h>

int main(){
	
	int cod, qtd;
	
	printf("Informe o código do produto:");
	scanf("%d",&cod);
	printf("Informe a quantidade:");
	scanf("%d",&qtd);
	
	switch(cod){
		case 1: printf("Total R$ %.2f",qtd*4.00);break;
		case 2: printf("Total R$ %.2f",qtd*4.50);break;
		case 3: printf("Total R$ %.2f",qtd*5.00);break;
		case 4: printf("Total R$ %.2f",qtd*2.00);break;
		case 5: printf("Total R$ %.2f",qtd*1.50);
	}
	
return 0;	
}
