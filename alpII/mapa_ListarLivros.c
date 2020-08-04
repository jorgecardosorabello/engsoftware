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
  int i;
  printf("2 - Listar Livros.\n");
  for (i=0; i<TAM; i++)
  {
		printf("\nLivros cadastrados: \n");
    if(cadastroObra[i].tipoObra == 1){
			printf("Livro %d: ", i+1);
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
  }
  return (0);
}