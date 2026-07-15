/*/Exercício 1 – Structs em C

Crie uma struct chamada Produto com os seguintes campos:

codigo ? int
nome ? char[50]
preco ? float
quantidade ? int

Depois, no main():

Crie uma variável do tipo struct Produto.
Atribua valores a todos os campos.
Exiba todas as informações utilizando printf()/*/

#include <stdio.h>
#include <string.h>

struct produto{
	
	int codigo;
	char nome[20];
	float preco;
	int quantidade;
	
};

int main(){
	
	struct produto produtos[3];
	
	int codigo[3] = {10, 20, 30};
    char nome[3][20] = {"Arroz", "Feijao", "Macarrao"};
    float preco[3] = {12.90, 10.00, 5.89};
    int quantidade[3] = {1, 4, 2};

	int i=0;
	
	for(i=0; i<3; i++){
	produtos[i].codigo=codigo[i];
	produtos[i].preco=preco[i];
	produtos[i].quantidade=quantidade[i];
	strcpy(produtos[i].nome, nome[i]);
	}
	for(i=0; i<3; i++){
	printf("CODIGO DO PRODUTO E: %d \n", produtos[i].codigo);
	printf("NOME DO PRODUTO: %s \n", produtos[i].nome);
	printf("PREÇO: %.2f \n", produtos[i].preco);
	printf("QUANTIDADE: %d\n", produtos[i].quantidade);
		
	}
	
	return 0;
}
