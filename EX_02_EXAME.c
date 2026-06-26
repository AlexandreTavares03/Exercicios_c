#include <stdio.h>

int Verificar_num(int n){
	
	if(n>=0){
		return 1;
	} else {
		return 0;
	}
}

int main (){
	int n=0;
	int result;
	printf("Digite um numero:"); scanf("%d", &n);
	
	result = Verificar_num(n);
	printf("O retorno do numero digitado e: %d \n", result);
	
	return 0;
	
}
