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
  int i=0;
  char resp = 's';

  printf("1 - Cadastrar os livros\n");
  while((resp == 's'|| resp == 'S') && (i <= TAM))
  {
    printf("Tipo de obra\nTecle [1] para livro ou para [2] revista: "); /*fflush(stdin);*/ scanf("%d", &cadastroObra[i].tipoObra);
    printf("Título: "); /*fflush(stdin);*/ gets(cadastroObra[i].titulo); /*scanf("%50[^\n]s", &cadastroObra[i].titulo);*/
    printf("Autor: "); /*fflush(stdin);*/ gets(cadastroObra[i].autor); /*scanf("%30[^\n]s", &cadastroObra[i].autor);*/
    printf("Editora: "); /*fflush(stdin);*/ gets(cadastroObra[i].editora); /*scanf("%30[^\n]s", &cadastroObra[i].editora);*/
    printf("ISBN: "); /*fflush(stdin);*/ scanf("%d", &cadastroObra[i].ISBN);
    printf("Edição: "); /*fflush(stdin);*/ scanf("%d", &cadastroObra[i].edicao);
    printf("Ano: "); /*fflush(stdin);*/ scanf("%d", &cadastroObra[i].ano);
    printf("Quantidade de exemplares: "); /*fflush(stdin);*/ scanf("%d", &cadastroObra[i].quantExemplares);
    printf("Caixa: "); /*fflush(stdin);*/ scanf("%d", &cadastroObra[i].caixa);

    printf("\nDeseja cadastrar novo registro [s][n]: ");
    /*fflush(stdin);*/
    scanf("%c", &resp);
    if((resp == 's') || (resp == 'S')){
      i++;
    };
  }
  return (0);
}