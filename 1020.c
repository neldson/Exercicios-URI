#include <stdio.h>



int main(){

	

	int n, anos, meses, dias;



	printf("\nDigite a idade em dias:");

	scanf("%d",&n);



	anos = n/365;

	meses = (n%365)/30;

	dias = (n%365) % 30;



	printf("%d ano(s)\n",anos);

	printf("%d mes(es)\n",meses);

	printf("%d dia(s)\n",dias);



	return 0;

}
