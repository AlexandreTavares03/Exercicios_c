#include <stdio.h>
#include <string.h>

struct funcionario {
	int cod;
	char nome[50];
	char cargo[30];
	float sal;
};
void CadastrarFunc(struct funcionario *funcionario){
	FILE *arquivo;
	arquivo = fopen("funcionarios.dat", "ab");
	if (arquivo == NULL){
		printf("Erro ao abrir arquivo");
		return;
	}
	printf("CODIGO:"); scanf("%d",&funcionario->cod);
	printf("NOME:"); scanf(" %49[^\n]", funcionario->nome);
	printf("CARGO:"); scanf(" %29[^\n]", funcionario->cargo);
	printf("SALARIO:"); scanf("%f", &funcionario->sal);
	
	fwrite(funcionario, sizeof(struct funcionario),1,arquivo);
	fclose(arquivo);
	
	printf("funcionario cadastrado com sucesso!!");
};
void ListFunci(){
	
	FILE *arquivo;
	
	struct funcionario funcionario;
	arquivo = fopen("funcionarios.dat", "rb");
	if (arquivo == NULL){
		printf("Erro ao ler arquivo");
		return;
	}
	
				printf("\n=== LISTA DE FUNCIONARIOS===\n");
	
	while(fread(&funcionario,sizeof(struct funcionario), 1, arquivo) ==1){
				
				printf("Codigo: %d\n", funcionario.cod);
				printf("Nome: %s\n", funcionario.nome);
				printf("Cargo: %s\n", funcionario.cargo);
				printf("Salario: %.2f\n", funcionario.sal);
	}
	fclose (arquivo);
};
void BuscFunc(){
	printf("Buscar funcionário\n");
};
void AltFunc(){
	printf("Alterar funcionario\n");
};
void ExcluirFunc(){
	printf("Exluir funcionario\n");
};
void Sair(){
	printf("Volte sempre!!\n");
};

int main (){
	
	int opcao;
	
	struct funcionario funcionario;
	
	do{
		printf("===MENU===\n");
		printf("1. CADASTRAR FUNCIONARIO:\n");
		printf("2. LISTAR FUNCIOARIO:\n");
		printf("3. BUSCAR FUNCIONARIO:\n");
		printf("4. ALTERAR FUNCIONARIO:\n");
		printf("5. EXCLUIR FUNCIONARIO:\n\n");
		
		printf("ESCOLHA UMA DAS OPCOES:"); scanf("%d", &opcao);
		
		
		switch (opcao){
			
			case 1:
				CadastrarFunc(&funcionario);
				printf("\n=== FUNCIONARIO CADASTRADO ===\n");
				printf("Codigo: %d\n", funcionario.cod);
				printf("Nome: %s\n", funcionario.nome);
				printf("Cargo: %s\n", funcionario.cargo);
				printf("Salario: %.2f\n", funcionario.sal);	
				break;
			case 2:
				ListFunci();
				break;
			case 3:
				BuscFunc();
				break;
			case 4:
				AltFunc();
				break;
			case 5:
				ExcluirFunc();
				break;
			case 0:
				Sair();
				break;	
			default:
				printf("opcao invalida\n");
		}		
	}
			while (opcao !=0);
	
	
	return 0;
}
