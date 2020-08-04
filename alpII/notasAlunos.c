#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL,"");
	float notas[3][2];
	int i,j;

	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\nInforme a nota %d do aluno %d: ", j+1, i+1);
			scanf("%f", &notas[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\nNota[%d][%d] = %f", i, j, notas[i][j]);
		}
	}
return 0;
}