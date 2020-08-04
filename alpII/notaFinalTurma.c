#include <stdio.h>

int main(void) {
	char nome[10];
	float notaFinal, notaAlunos, soma;
	int i;

	i = 0;
  soma = 0;
	notaFinal = 0;

	printf("\nNome do aluno: ");
	scanf("%s", nome);
	printf("\nNota final do aluno: ");
	scanf("%f", &notaAlunos);

	while(notaAlunos != 0)
  {
    soma = soma + notaAlunos;
		i = i + 1;

		printf("\nNome do aluno: ");
		scanf("%s", nome);
		printf("\nNota final do aluno: ");
		scanf("%f", &notaAlunos);
  }
	
	notaFinal = (soma/i);
  printf("\n------------------------------");
  printf("\n%d", i);
  printf("\nSoma: %f", soma);
	printf("\nMédia final da turma: %f", notaFinal);
  return 0;
}