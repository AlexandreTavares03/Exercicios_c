#include <stdio.h>

int main(){
	
	float salario =4200.0;
	float *sal;
	
	sal= &salario;
	
	printf("Antes:%.2f \n", *sal);
	
	*sal = 4200.00;
	
	printf("Depois: %.2f", *sal);
	
	return 0;
}
