#include<stdio.h>

int main(){
	int a,b,c,d,e, cont;
	
	cont = 0;
	
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	
	if(a%2 == 0)
		cont++;//contador recebe ele mesmo mais um cont = cont + 1;
	if(b%2 == 0)
		cont++;
	if(c%2 == 0)
		cont++;
	if(d%2 == 0)
		cont++;	
	if(e%2 == 0)
		cont++;
		
	printf("%d valores pares",cont);
	
	return 0;	
}
