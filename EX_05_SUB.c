#include <stdio.h>
 float CalcularAcresc(float *antigo, float atual){
 	float resultado;
 	resultado = ((atual - *antigo )/ *antigo)*100;
 	return resultado;
 } 

int main(){
	
	float antigo, atual;
	float resultado;
	
	printf("DIGITE VALOR ANTIGO DO PRODUTO:"); scanf("%f", &antigo);
	printf("DIGITE VALOR ATUAL DO PRODUTO:"); scanf("%f", &atual);
	
	resultado=CalcularAcresc(&antigo, atual);
	printf("VALOR ANTIGO É: %.2f \n", antigo);
	printf("PERCENTUAL DE ACRÉSCIMO ENTRE OS DOIS VALORES É: %.2f%%", resultado);
	
	return 0;
}
