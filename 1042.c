#include<stdio.h>

int main(){
	int num1, num2, num3;
	
	printf("Informe tres numeros:");
	scanf("%d %d %d", &num1,&num2,&num3);
	
	if (num1>num2 && num2>num3 && num1>num3){
		printf("%d\n %d\n %d\n\n",num3, num2, num1);
		printf("%d\n %d\n %d\n",num1, num2, num3);
	}
	else{
		if(num1>num2 && num2<num3 && num3<num1){
			printf("%d\n %d\n %d\n",num2, num3, num1);
			printf("%d\n %d\n %d\n",num1, num2, num3);
		}
		if(num1<num2 && num2<num3 && num1<num3){
			printf("%d\n %d\n %d\n",num1, num2, num3);
			printf("%d\n %d\n %d\n",num1, num2, num3);
		}	
	    if(num3>num2 && num3>num1 && num1>num2){
	    	printf("%d\n %d\n %d\n", num2,num1, num3);
	    	printf("%d\n %d\n %d\n",num1, num2, num3);
		}
	    if(num2>num1 && num1>num3 && num1>num3){
	    	printf("%d\n %d\n %d\n",num3,num1,num2);
	    	printf("%d\n %d\n %d\n",num1, num2, num3);
		}
	    if(num1<num3 && num3<num2 && num1<num2){
	    	printf("%d\n %d\n %d\n",num1, num3, num2);
	    	printf("%d\n %d\n %d\n",num1, num2, num3);
	    }
	}
	
return 0;
}
