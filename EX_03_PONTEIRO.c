#include <stdio.h>

void SomarCinco(int *n){
	
	*n= *n+5;
}

int main(){
	
	int valor =30;
	int *n;
	
	n= &valor;
	
	SomarCinco(n);
	
	printf("%d", *n);
	
	return 0;
}
