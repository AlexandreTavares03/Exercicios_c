/*/ Esse programa LÊ NÚMERO DE HABITANTES QUE VAI SER ARMAZENADO NA VARIÁVEL N, Onde o instrução esta no main.
A partir disso foram criadas 4 sub-rotinas: 
1° SUB ROTINA P/ LER OS DADOS DE NUMERO DE FILHOS, VALOR DO SALARIO E
ARMAZENAR EM 2 VETORES DISTINTOS QUE SÃO CRIADOS A PARITR DE DA DEFINIÇÃO DE N.
2°SUB ROTINA PARA CALCULAR A MEDIA DE FILHOS POR HABITANTE.
3° SUB ROTINA P/ CALCULAR A MEDIA DE SALARIO.
4° SUB ROTINA P/ VARRER O VETOR E ENCONTRAR QUAL FOI O MAIOR SALARIO INFORMADO.
/*/

#include <stdio.h>
//Ler os dados a partir da definição de (n) la na parte principal no main
int LerDados(int n ,int num_filhos[], float val_sal[]){
	int i;
	for(i=0; i<n; i++){
	printf("DIGITE O NUMERO DE FILHOS:"); scanf("%d", &num_filhos[i]);
	printf("DIGITE SALARIO:");scanf("%f", &val_sal[i]);
	}
}
// Faz a média dos salarios que foram armazenados no vetor
float MediaSal(int n, float val_sal[]){
	int i=0;
	float media=0;
	for(i=0;i<n;i++){
		media=media+val_sal[i];
	}
		media = media/n;
	return media;
}
// Faz a média dos filhos que foram armazenados no vetor
float MediaFilhos( int n, int num_filhos[]){
	int i=0;
	float media_f=0;
	
	for(i=0; i<n; i++){
		media_f=media_f+num_filhos[i];
	}
	media_f= media_f/n;
	
	return media_f;
}
// Varre o vetor e acha qual foi o maior número digitado
float MaiorSal(int n, float val_sal[]){
	int i =0;
	float maior_sal=-1;
	for(i=0; i<n; i++){
		if(val_sal[i]>maior_sal){
			maior_sal = val_sal[i];
		}
	}
	return maior_sal;
}
	
int main(){

	int n, i;
	float media;
	float media_f, maior_sal;
	
	//Intrução para definir número de habitantes
	printf("DIGITE NUMERO DE HABITANTES:"); scanf("%d", &n);
	if(n<1){
	return 1;
	}
	// As variaveis vão aqui pois primeiro o usuário deve digitar o número de habitantes,
	// a partir dai o programa vai reconhecer e poder armazenar o numero digitados nos vetores.
	int num_filhos[n];
	float val_sal[n];
	
	// Essa função traz a sub rotina criada e aqui é gerado o loop de quantos habitantes o usuário digitou.
	LerDados(n,num_filhos,val_sal);
	
	// Essa função traz a média de salario que foi digitada pelo usuário la na sub rotina criada
	media = MediaSal(n, val_sal);
	printf("Media de salario é: %.2f \n",media);
	
	// Essa função traz a média de filhos que foi digitado pelo usuário la na sub rotina criada
	media_f = MediaFilhos(n, num_filhos);
	printf("Media de filhos por habitantes é: %.2f \n", media_f);
	
	// Essa função traz o maior salario que foi digitado dentro da sub rotina criada
	maior_sal = MaiorSal(n, val_sal);
	printf("Maior salario e: %.2f", maior_sal);
	
	return 0;
}
