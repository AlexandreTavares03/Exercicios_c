/*/ Foi realizada uma pesquisa sobre algumas características físicas de cinco habitantes de uma região. 
Foram coletados os seguintes dados de cada habitante: sexo, cor dos olhos (A — azuis; ou C — casta
nhos), cor dos cabelos (l — louros; P — pretos; ou C — castanhos) e idade. Faça um programa que 
apresente as sub-rotinas a seguir:
¦¦ Que leia esses dados, armazenando-os em vetores. 
¦¦ Que determine e devolva ao programa principal a média de idade das pessoas com olhos castanhos 
e cabelos pretos. 
¦¦ Que determine e devolva ao programa principal a maior idade entre os habitantes. 
¦¦ Que determine e devolva ao programa principal a quantidade de indivíduos do sexo feminino com 
idade entre 18 e 35 anos (inclusive) e que tenham olhos azuis e cabelos louros. /*/

#include <stdio.h>

void LerDados(char sexo[], char cor_olhos[], char cor_cabelo[], int idade[], int N){
	int i =0;
	
	printf("=======DADOS DA GALERA========= \n");
	
	for(i=0 ; i<N; i++){
	printf("\n DIGITE IDADE:"); scanf("%d", &idade[i]);
	printf("\n DIGITE SEXO:"); scanf(" %c", &sexo[i]);
	printf("\n DIGITE COR DO CABELO (L)- Loiro, (P)- Preto, (C)- Castanho:"); scanf(" %c", &cor_cabelo[i]);
	printf("\n DIGITE COR DOS OLHOS (A)- Azul, (C)- Castanho:"); scanf(" %c", &cor_olhos[i]);
	}	
}

float MediaIdade(int idade[], int N){
	int i=0;
	float media=0;
	for(i=0; i<N; i++){
		media = media+idade[i];	
	}
	media = media/N;
	
	return media;
}

int MaiorIdade( int idade[], int N){
	int i=0;
	int maior=0;
	
	for(i=0; i<N; i++){
		if(idade[i]>maior){
			maior = idade[i];	
		}
	}
	return maior;
}

float MedIdadeOlhoCabelo(int N, char cor_olhos[], char cor_cabelo[],int idade[]){
	float soma_med=0;
	float cont=0;
	int i=0;
	
	for(i=0; i<N; i++){
		if(cor_olhos[i]=='C' && cor_cabelo[i]=='P'){
			
			soma_med=soma_med+idade[i];
			cont++;
		}
	}
	if(cont>0){
		soma_med=soma_med/cont;
	} else {
		return 0;
	}
	return soma_med;
}

int main(){
	int N;
	
	printf("INFORME O VALOR DE HABITANTES:"); scanf("%d", &N);
	
	char sexo[N], cor_olhos[N], cor_cabelo[N];
	int idade[N];
	float media, soma_med;
	int maior;
	
	LerDados(sexo, cor_olhos, cor_cabelo, idade, N);
	media= MediaIdade(idade, N);
	maior= MaiorIdade(idade, N);
	soma_med= MedIdadeOlhoCabelo(N, cor_olhos, cor_cabelo, idade);
	
	printf("MEDIA DE IDADE DOS HABITANTES E: %.2f", media);
	printf("MAIOR IDADE É: %d", maior);
	printf("MÉDIA DE IDADE DE HABITANTES QUE TEM OLHOS CASTANHOS E CABELOS PRETOS E: %.2f", soma_med);
	
	return 0;
}
