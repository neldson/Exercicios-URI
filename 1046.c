#include <stdio.h>



int main(){

	int ini,fin, duracao;



	scanf("%d",&ini);

	scanf("%d",&fin);





	if (ini > fin) {



		duracao = (24 + fin) - ini;



		printf("O JOGO DUROU %d HORA(S)\n", duracao);

	}

	

	else if (ini < fin) {



			duracao = fin - ini;



			printf("O JOGO DUROU %d HORA(S)\n", duracao);		

	}	

	

	else {



		printf("O JOGO DUROU 24 HORA(S)\n");



	}



	return 0;

}
