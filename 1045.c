#include<stdio.h>

int main(){
 	float a, b, c;
 	
 	scanf("%f %f %f",&a,&b,&c);
 	
 	if(a>=b+c)
 		printf("Nao forma triangulo.\n");
 	if((a*a)==(b*b)+(c*c))
 		printf("Triangulo retangulo.\n");
 	if((a*a)>(b*b)+(c*c))
 		printf("Triangulo obstusangulo.\n");
 	if((a*a)<(b*b)+(c*c))
 		printf("Triangulo acutangulo.\n");
 	if(a==b && b==c && a==c)
 		printf("Triangulo equilatero.\n");
 	if(a==b && b!=c || b==c && b!=a)
 		printf("Triangulo isosceles.");
 		
 	return 0;
}
 	
