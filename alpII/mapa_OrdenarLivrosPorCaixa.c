#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

#define TAM 3
struct obra
{
  int tipoObra;
  //1=Livro ou 2=Revista
  char titulo[50];
  char autor[30];
  char editora[30];
  int ISBN, edicao; ano, quantExemplares;
  int caixa;
};

int main()
{
  struct obra cadastroObra[TAM];
  int busca, i, acha;

  system("cls");
	printf("4 - Listar obras por caixa");
  printf("Digite a caixa que deseja buscar: ");
  scanf ("%d", &busca);
  i = 0;
  acha = 0;
  while ((i < TAM) && (acha == 0))
  {
    if (cadastroObra[i].caixa == busca)
    {
      acha = 1;
    }else{
      i++;
    }
    if (acha == 1)
    {
	    printf("TÍTULO: %s\n", cadastroObra[i].titulo);
	    printf("AUTOR: %s\n", cadastroObra[i].autor);
	    printf("EDITORA: %s\n", cadastroObra[i].editora);
	    printf("ISBN: %d\n", cadastroObra[i].ISBN);
	    printf("EDIÇÃO: %d\n", cadastroObra[i].edicao);
	    printf("ANO: %d\n", cadastroObra[i].ano);
	    printf("QUANTIDADE DE EXEMPLARES: %d\n", cadastroObra[i].quantExemplares);
	    printf("CAIXA: %d\n", cadastroObra[i].caixa);
			printf("*************************************************************");
    }
    else
      printf("\n Registro não encontrado");
  }
  return (0);
}