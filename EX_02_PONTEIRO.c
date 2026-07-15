#include <stdio.h>

int main(){
	
	int numero = 25;
	int *num;
	
	num= &numero;
	
	printf("%d \n", numero);
	printf("%p \n", &numero);
	printf("%d \n", *num);
	printf("%p", num);
	
	*num= *num * 4;
	
	printf("%d \n", *num);
	
	return 0;
}
