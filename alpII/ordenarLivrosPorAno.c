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
  struct livro troca;
  int i, j;
  
  system("cls");
  for (i=0;i<TAM-1;i++)
  {
    for (j=i+1;j<TAM;j++)
    {
      if (ficha[i].ano > ficha[j].ano)
      {
        troca = ficha[i];
        ficha[i] = ficha[j];
        ficha[j] = troca;
      }
    }
  }
  for (i=0;i<TAM;i++)
  {
    printf("\n CÓDIGO: %d, TÍTULO: %s, ANO: %d\n\n", ficha[i].codigo, ficha[i].titulo, ficha[i].ano);
  }
return (0);
}

