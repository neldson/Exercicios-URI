#include<stdio.h>

int main(){
	int a,b,c,d,e,f,cont;
	
	cont = 0;
	
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	
	if(a > 0)
		cont++; //contador recebe ele mesmo mais um cont = cont + 1;
	if(b > 0)
		cont++;
	if(c > 0)
		cont++;
	if(d > 0)
		cont++;	
	if(e > 0)
		cont++;
	if(f > 0)
		cont++;
		
	printf("%d valores positivos",cont);
	
	return 0;
	
}
