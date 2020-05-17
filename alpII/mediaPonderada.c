#include <stdio.h>
int main() {
	float nota1oTri, nota2oTri, nota3oTri, mediaPonderada;
	int peso1o, peso2o, peso3o, pesos;

	printf("Digite a nota do Primeiro trimestre: ");
	scanf("%f", &nota1oTri);
	printf("Digite O PESO da nota do Primeiro trimestre: ");
	scanf("%d", &peso1o);

	printf("Digite a nota do Segundo trimestre: ");
	scanf("%f", &nota2oTri);
	printf("Digite O PESO da nota do Segundo trimestre: ");
	scanf("%d", &peso2o);

	printf("Digite a nota do Terceiro trimestre: ");
	scanf("%f", &nota3oTri);
	printf("Digite O PESO da nota do Terceiro trimestre: ");
	scanf("%d", &peso3o);

	pesos = peso1o + peso2o + peso3o;
	mediaPonderada = ((peso1o * nota1oTri) + (peso2o * nota2oTri) + (peso3o * nota3oTri)) / pesos;

	printf("A média ponderada o aluno foi: %f", mediaPonderada);
	
return (0);
}
