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
/*/ Nessa sub rotina o programa lê os dados e armazena nos vetores. O i=0; é usado como uma contador para o for, e
não possui o "retun" pois o programa só armazena e não pede pra devolver nada./*/

void LerDados(char sexo[], char cor_olhos[], char cor_cabelo[], int idade[], int N){
	int i =0;
	
	printf("\n=======DADOS DA GALERA========= \n");
	
	for(i=0 ; i<N; i++){
	printf("\n DIGITE IDADE:"); scanf("%d", &idade[i]);
	printf("\n DIGITE SEXO: (M)- Masculino, (F)- Feminino:"); scanf(" %c", &sexo[i]);
	printf("\n DIGITE COR DO CABELO (L)- Loiro, (P)- Preto, (C)- Castanho:"); scanf(" %c", &cor_cabelo[i]);
	printf("\n DIGITE COR DOS OLHOS (A)- Azul, (C)- Castanho:"); scanf(" %c", &cor_olhos[i]);
	}	
}
/*/ Nessa sub rotina o programa testa algumas condições impostas, soma e devolve através do return quais individuos
que se enquadram nas caracteristicas e soma mais 1 no contador "quan_fem"./*/

int QuantFeminino(char sexo[], char cor_olhos[], char cor_cabelo[], int idade[], int N){
	int quant_fem=0;
	int i=0;
	
	for (i=0; i<N; i++){
		if(sexo[i]== 'F' && cor_olhos[i]== 'A' && cor_cabelo[i]== 'L' && idade[i]>=18 && idade[i]<=35){
		
			quant_fem= quant_fem +1;
		}
	}
	return quant_fem;
}
/*/ Nessa sub rotina o programa adicionei por conta própria uma média de idade, aqui adicionei 
uma variavel "media=0" para que a mesma pudesse somar as idades de todos habitantes que forem digitadas
 e dividir pela quantidade de habitantes./*/
 
float MediaIdade(int idade[], int N){
	int i=0;
	float media=0;
	for(i=0; i<N; i++){
		media = media+idade[i];	
	}
	media = media/N;
	
	return media;
}
/*/ Nessa sub rotina o programa percorre o vetor em busca da maior idade digitada./*/

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

/*/ Nessa sub rotina ela faz a media de idade de pessoas que possuem duas caracteristiscas especificas iguais,
aqui foi implementadas condições p/ percorrer o vetor, uma variavel "soma_med" cridada para somar as idades dos habitantes 
que se enquadram na condição proposta e uma variavel"cont" para somar 1 a cada vez que a condição é alcançada e posteriormente
dividir a soma das idades pelo contador (soma_med/cont), isso retornado a média que foi solicitada./*/

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
	/*/ No programa principal  adicionei para que o usuário defina quantos habitantes, por isso sempre inicio a variavel N
	para que a primeira mensagem que apareça seja pro usuário definir a qtd e a partir disso são definidos
	a qtd de vetores que serão percorridos e quantas vezes o for vai repetir as msg pro usuário/*/
	int N;
	printf("INFORME O VALOR DE HABITANTES:"); scanf("%d", &N);
	
	/*/ Aqui são as variáveis usadas no retun e no programa principal depois que o vetor "N" foi iniciado de fato/*/
	char sexo[N], cor_olhos[N], cor_cabelo[N];
	int idade[N];
	float media, soma_med;
	int maior, quant_fem;
	
	/*/ Aqui no programa principal é onde acontece a chamada das sub rotinas que foram feitas, 
	e é aqui que elas são executadas no programa principal/*/
	LerDados(sexo, cor_olhos, cor_cabelo, idade, N);
	media= MediaIdade(idade, N);
	maior= MaiorIdade(idade, N);
	soma_med= MedIdadeOlhoCabelo(N, cor_olhos, cor_cabelo, idade);
	quant_fem= QuantFeminino(sexo, cor_olhos, cor_cabelo, idade, N);
	
	/*/ Aqui exibe o resultado das funções que foram feitas para que o usuário veja/*/
	printf("\n ===========================================");
	printf("\n MEDIA DE IDADE DOS HABITANTES E: %.2f \n", media);
	printf("\n MAIOR IDADE É: %d \n", maior);
	printf("\n MÉDIA DE IDADE DE HABITANTES QUE TEM OLHOS CASTANHOS E CABELOS PRETOS E: %.2f \n", soma_med);
	printf("\n A QUANTIDADE DE HABITANTES DO SEXO FEMININO E QUE POSSUEM AS CARACTERISTICAS INOFORMADAS SAO: %d \n", quant_fem);
	
	return 0;
}
