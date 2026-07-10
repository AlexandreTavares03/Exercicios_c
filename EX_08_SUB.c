#include <stdio.h>

void CadastroAtlet(int n, int cod_atleta[], int idade[],int pont[], float altura[], float peso[]){
	int i=0;
	
	for(i=0; i<n; i++){
	printf("\n INFORME CODIGO DO ATLETA:"); scanf("%d", &cod_atleta[i]);
	printf("\n INFORME IDADE DO ATLETA:"); scanf("%d", &idade[i]);
	printf("\n INFORME ALTURA DO ATLETA:"); scanf("%f", &altura[i]);
	printf("\n INFORME PESO DO ATLETA:"); scanf("%f", &peso[i]);
	printf("\n INFORME PONTUACAO DO ATLETA:"); scanf("%d", &pont[i]);
	printf("=============================== \n");
	}
}

int TotAtlet(int cod_atleta[], int n){
	int i=0;
	
	for(i=0; i<n; i++){
		cod_atleta[n]++;
	}
	return cod_atleta[n];
}

float MediaIdade(int idade[], int n){
	int i=0;
	float media=0;
	
	for(i=0; i<n; i++){
		media = media+idade[i];	
	}
	media = media/n;
	
	return media;
}

float MenorAltura( float altura[], int n ){
	int i=0;
	int menor=altura[0];
	
	for(i=0; i<n; i++){
		if(altura[i]<menor){
			menor = altura[i];	
		}
	}
	return menor;
}

int MaiorPont( int pont[], int n){
	int i=0;
	int maior_pont=0;
	
	for(i=0; i<n; i++){
		if(pont[i]>maior_pont){
			maior_pont = pont[i];	
		}
	}
	return maior_pont;
}

int main(){
	
	int n;
	
	printf("INFORME A QUANTIDADE DE ATLETAS:"); scanf("%d", &n);
	
	int cod_atleta[n], idade[n], pont[n];
	float altura[n], peso[n];
	float media, menor;
	int cont_atleta, maior_pont;
	int opcao;
	
	
	CadastroAtlet(n, cod_atleta, idade, pont, altura, peso);
	cont_atleta = TotAtlet(cod_atleta, n);
	media = MediaIdade(idade, n);
	menor= MenorAltura(altura, n);
	maior_pont = MaiorPont(pont, n);
	
	
	printf("A QUANTIDADE DE ATLETAS E: %d \n", cont_atleta);
	printf("A MEDIA DE IDADE E: %.2f \n", media);
	printf("A MENOR ALTURA E: %.2f \n", menor);
	printf("A MAIOR PONTUACAO E: %d \n", maior_pont);
	
	return 0;
}