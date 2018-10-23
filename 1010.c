#include<stdio.h>

int main(){

 	int numitem, numitem2, qtd, qtd2;
 	float valoritem, valoritem2, total;
 	
 	scanf("%d %d %f", &numitem, &qtd, &valoritem);
 	scanf("%d %d %f", &numitem2, &qtd2, &valoritem2);
 	
 	total = (qtd*valoritem)+(qtd2*valoritem2);
 	
 	printf("Total:%.2f", total);
 	 
 	return 0;
 }
