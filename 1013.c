#include <stdio.h>



int main(){

	

	int a, b, c, maior;

	

	printf("\nDigite o primeiro n�mero:");

	scanf("%d",&a);

	printf("\nDigite o segundo n�mero:");

	scanf("%d",&b);

	printf("\nDigite o terceiro n�mero:");

	scanf("%d",&c);



	maior = (a+b+abs(a-b))/2;

	maior = (c + maior + abs(maior - c))/2;

	

	printf("%d eh o maior\n", maior);



	return 0;

}
