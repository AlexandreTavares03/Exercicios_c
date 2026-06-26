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

void LerDados(char sexo[], char cor_olhos[], char cor_cabelo[], int idade[]){
	int i =0;
	
	printf("=======DADOS DA GALERA========= \n");
	
	for(i=0 ; i<5; i++){
	printf("DIGITE IDADE:"); scanf("%d", &idade[i]);
	printf("\n DIGITE SEXO:"); scanf(" %c", &sexo[i]);
	printf("\n DIGITE COR DO CABELO:"); scanf(" %c", &cor_cabelo[i]);
	printf("\n DIGITE COR DOS OLHOS: \n"); scanf(" %c", &cor_olhos[i]);
	}	
}

int main(){
	
	char sexo[5], cor_olhos[5], cor_cabelo[5];
	int idade[5];
	
	LerDados(sexo, cor_olhos, cor_cabelo, idade);
	
	return 0;
}
