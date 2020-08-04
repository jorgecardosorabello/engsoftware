#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void)
{
	setlocale(LC_ALL,"");
	int idade[5];
	int i, j=0;
	int somaIdade = 0;
	float mediaIdade;
	
	for(i=0;i<5;i++)
	{
		printf("\nInforme a idade do aluno %d: ", i+1);
		scanf("%d", &idade[i]);
		somaIdade = somaIdade + idade[i];
		j++;
	}
	mediaIdade = somaIdade / j;
	printf("A média de idade é = %.2f, portanto,", mediaIdade);
	
	if(mediaIdade >= 18)
	{
		printf(" prova nível difícil!");
	}else if(mediaIdade >= 15)
	{
		printf(" prova nível média!");
	}else
	{
		printf(" prova nível fácil!");
	}
  return 0;
}