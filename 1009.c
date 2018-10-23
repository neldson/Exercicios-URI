#include<stdio.h>

int main(){

 
 	char nome[30];
 	float salario,salariofinal,vendas,comissao = 0.15;
 	
 	scanf("%s %f %f", &nome, &salario, &vendas);
 	
 	salariofinal =  salario + (vendas*comissao);
 	
 	printf("Vendedor: %s \n Salario:%.2f",nome,salariofinal);
 	 
 	return 0;
 }
