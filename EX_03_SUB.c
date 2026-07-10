#include <stdio.h>

int SomaVal(int n1, int n2){
	int soma =0;
	int i;
	for(i=n1; i<=n2; i++){
	soma= soma+i;	
	}
	return soma;
}

int main(){
	int n1, n2;
	int soma;
	int i;
	printf("DIGITE PRIMEIRO NUMERO:"); scanf("%d", &n1);
	printf("DIGITE SEGUNDO NUMERO:"); scanf("%d", &n2);
	
	soma=SomaVal(n1,n2);
	printf("Resultado e: %d", soma);
	
	return 0;
}
