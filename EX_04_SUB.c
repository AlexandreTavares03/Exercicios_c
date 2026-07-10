#include <stdio.h>

float Media_A_P(int n1, int n2, int n3, char opcao){
	
	float media = 0;
	if(opcao== 'A'){
		media= (n1+n2+n3)/3.0;
	}	
	else if (opcao=='P'){
		media= ((n1*5)+(n2*3)+(n3*2))/10.0;
	}
		return media;
	}


int main(){
	
	int n1, n2, n3;
	char opcao;
	float media;
	
	printf("DIGITE NOTA 1:"); scanf("%d", &n1);
	printf("DIGITE NOTA 2:"); scanf("%d", &n2);
	printf("DIGITE NOTA 3:"); scanf("%d", &n3);
	
	printf("DIGITE UMA OPCAO: A ou P:"); scanf(" %c", &opcao);
	
	media = Media_A_P(n1, n2, n3, opcao);
	
	if(opcao=='A'){
	printf("MEDIA ARITMETICA E: %.2f", media);
	}
	else if(opcao=='P'){
	printf("MEDIA PONDERADA E: %.2f", media);
	}
	else{
		printf("OP INVALIDA!");
	}
	
	return 0;
}