#include<stdio.h>

int main(){

 
 	int numfunc, horastrab;
 	float valorhora, salario;
 	
 	scanf("%d %d %f", &numfunc, &horastrab, &valorhora);
 	
 	salario = horastrab * valorhora;
 	printf("Numero: %d \n Salario:%.2f", numfunc,salario);
 	 
 	return 0;
 }
