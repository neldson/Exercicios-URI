#include<stdio.h>
#include<locale.h>

int main(){
	 setlocale(LC_ALL, "Portuguese");
	 int mes;
	 scanf("%d", &mes);
	 
	 if(mes>=1 && mes<=12){
	 	switch(mes){
	 		case 1: printf("January");break;
	 		case 2: printf("February");break;
	 		case 3: printf("March");break;
	 		case 4: printf("April");break;
	 		case 5: printf("May");break;
	 		case 6: printf("June");break;
	 		case 7: printf("July");break;
	 		case 8: printf("August");break;
	 		case 9: printf("September");break;
	 		case 10: printf("October");break;
	 		case 11: printf("November");break;
	 		case 12: printf("December");break;
		 }
	}else
		printf("O n�mero n�o corresponde ao intervalo 1-12.");
	 
	 return 0;
	 
}
