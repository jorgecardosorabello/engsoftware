#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

#define TAM 20

struct livro
{
  int codigo;
  char titulo[50];
  char autor[30];
  char area[30];
  int ano;
  char editora[30];
};

int main()
{
  struct livro ficha[TAM];
  int i;
  printf("2 - Imprimir os livros cadastrados\n");
  for (i=0; i<TAM; i++)
  {
    printf("\nCÓDIGO: %d\n", ficha[i].codigo );
    printf("TÍTULO: %s\n", ficha[i].titulo);
    printf("AUTOR: %s\n", ficha[i].autor);
    printf("ÁREA: %s\n", ficha[i].area);
    printf("ANO: %d\n", ficha[i].ano);
    printf("EDITORA: %s\n\n", ficha[i].editora);
  }
  return (0);
}

