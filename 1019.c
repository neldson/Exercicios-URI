#include <stdio.h>



int main(){

	

	int n, hrs, min, segs;



	printf("\nDigite o tempo de dura��o do evento na f�brica:");

	scanf("%d",&n);

	

	hrs = n/3600;



       	min =(n-(hrs*3600))/60;

	

	segs = n-(hrs*3600)-(min*60);

	

	printf ("%d:%d:%d\n", hrs, min, segs);

	

	return 0;

}
