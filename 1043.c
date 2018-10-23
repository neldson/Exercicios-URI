#include <stdio.h>
 	int main(){
	double a, b, c, perimetro, area;

	scanf("%lf %lf %lf", &a, &b, &c);

	if(a+b>c && a+c>b && b+c>a){
	
	perimetro=a+b+c;
	printf("perimetro = %.1lf\n", perimetro);

	}
	else {
	
	area=((a+b)*c)/2;
	printf("area = %.1lf\n", area);
	}
	return 0;
}
	 
