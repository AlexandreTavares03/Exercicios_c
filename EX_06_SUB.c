#include <stdio.h>

void Resultados(int n[], int maior, int menor){
	
	int i=0;
	
	for(i=0; i<5; i++){
		printf("DIGITE 5 VALORES INTEIROS:"); scanf("%d", &n[i]);
	}
	
	maior= n[0];
	menor= n[0];
	
	for(i=0; i<5; i++){
		if(n[i]>maior){
			maior=n[i];
		}
		if (n[i]<menor){
			menor=n[i];
		}
	}
	printf("\nNUMEROS DIGITADOS FORAM:");
	for(i=0; i<5; i++){
	printf("%d", n[i]);	
	}
	printf("\n %d", menor);
	printf("\n %d", maior);
}

int main(){
	
	int n[5];
	int i=0;
	int maior, menor;
	
	Resultados(n,maior,menor);
	return 0;
}
