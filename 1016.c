#include <stdio.h>



int main(){

	

	int dist, resultado;



	printf("\nDigite a dist�ncia, em Km, entre os carros:");

	scanf("%d", &dist);



	resultado = (dist*60)/30;



	printf("O intervalo de tempo � de: %d minutos \n", resultado);



	return 0;



}
