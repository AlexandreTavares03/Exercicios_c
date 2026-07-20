#include <stdio.h>

int main(){
	
	char nome[20];
	int idade;
	
	FILE *pessoa;
	pessoa = fopen("pessoa.txt", "r");
	
	fscanf(pessoa, "%s %d", nome, &idade);
	
	fclose(pessoa);
	
	printf("Nome: %s \n", nome);
	printf("Idade: %d", idade);
	
	return 0;
}
	
