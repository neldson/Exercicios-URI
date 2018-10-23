#include <stdio.h>



int main(){



	double n;

	int troco;

	int cem, cinquenta, vinte, dez, cinco, dois;

	int um, cinquentacent, vintecincocent, dezcent, cincocent, umcent;



	scanf("%lf",&n);



	int notas = n;

	int moedas = (n-notas)*100;



	if((moedas*1000)%10==9){

		moedas++;

	}



	//Notas



	cem = notas/100;

	notas = notas%100;

	cinquenta = notas/50;

	notas = notas%50;

	vinte = notas/20;

	notas = notas%20;

	dez = notas/10;

	notas = notas%10;

	cinco = notas/5;

	notas = notas%5;

	dois = notas/2;

	notas = notas%2;



	//Moedas



	um = notas/1;

	notas = notas%1;

	cinquentacent = moedas/50;

	moedas = moedas%50;

	vintecincocent = moedas/25;

	moedas = moedas%25;

	dezcent = moedas/10;

	moedas = moedas%10;

	cincocent = moedas/5;

	moedas = moedas%5;

	umcent = moedas/1;



	printf("NOTAS:\n");

	printf("%d notas(s) de R$100,00\n",cem);

	printf("%d notas(s) de R$50,00\n",cinquenta);

	printf("%d nota(s) de R$20,00\n",vinte);

	printf("%d nota(s) de R$10,00\n",dez);

	printf("%d nota(s) de R$5,00\n",cinco);

	printf("%d nota(s) de R$2,00\n",dois);

	printf("MOEDAS:\n");

	printf("%d moeda(s) de R$1,00\n",um);

	printf("%d moeda(s) de R$0,50\n",cinquentacent);

	printf("%d moeda(s) de R$0,25\n",vintecincocent);

	printf("%d moeda(s) de R$0,10\n",dezcent);

	printf("%d moeda(s) de R$0,05\n",cincocent);

	printf("%d moeda(s) de R$0,01\n",umcent);



	

	return 0;



}
