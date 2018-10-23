#include<stdio.h>

int main(){
	float n1, n2, n3, n4, media, exfinal;
	media = 0;
	
	printf("Informe a primeira nota:");
	scanf("%f",&n1);
	printf("Informe a segunda nota:");
	scanf("%f",&n2);
	printf("Informe a terceira nota:");
	scanf("%f",&n3);
	printf("Informe a quarta nota:");
	scanf("%f",&n4);
	
	media = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;
	
	if(media<5.0){
		printf("Aluno reprovado");
		printf("Media: %.2f", media);
	}else{
		if(media>=5.0 && media<7.0){
			printf("Aluno em exame!\n");
			printf("Media: %.2f \n", media);
			printf("Informe a nota do exame final:\n");
			scanf("%f",&exfinal);
			printf("Nota do exame: %.2f\n",exfinal);
			if(exfinal+media/2>=5.0){
				printf("Aluno Aprovado\n");
				printf("Media Final: %f", (exfinal+media)/2);
			}else{
				printf("Aluno Reprovado\n");
				printf("Media Final: %f", (exfinal+media)/2);
			}
				
		}else{
			if(media>=7.0){
				printf("Aluno Aprovado\n");
				printf("Media Final: %f", media);
			}
		}
	}
	
return 0;	
}
