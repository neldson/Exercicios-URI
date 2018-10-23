#include <stdio.h>



int main(){

	

	int a, b, c, maior;

	

	printf("\nDigite o primeiro número:");

	scanf("%d",&a);

	printf("\nDigite o segundo número:");

	scanf("%d",&b);

	printf("\nDigite o terceiro número:");

	scanf("%d",&c);



	maior = (a+b+abs(a-b))/2;

	maior = (c + maior + abs(maior - c))/2;

	

	printf("%d eh o maior\n", maior);



	return 0;

}
