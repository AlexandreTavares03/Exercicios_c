#include <stdio.h>

int main(){
	
	char nome[20];
	int idade;
	
	printf("DIGITE NOME:"); scanf(" %s", nome);
	printf("DIGITE IDADE:"); scanf("%d", &idade);
	
	FILE *pessoa;
	
	pessoa = fopen("pessoa.txt", "w");
	
	fprintf( pessoa, "%s %d", nome, idade);
	
	fclose(pessoa);
	
	printf("DADOS GRAVADOS COM SUCESSO! \n");
	printf("%s \n", nome);
	printf("%d", idade);
	
	
	
	return 0;
}
