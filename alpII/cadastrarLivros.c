
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

  printf("1 - Cadastrar os livros\n");
  
  system("cls");
  for (i=0; i<TAM; i++)
  {
    printf("Digite o código do livro da posição %d: ", i+1 );
    fflush(stdin);
    /*gets(ficha[i].codigo);*/
    scanf("%d", &ficha[i].codigo); 
    printf("Digite o título do livro: ");
    fflush(stdin);
    /*gets(ficha[i].titulo);*/
    scanf("%50[^\n]s", &ficha[i].titulo);
    printf("Digite o nome do autor: ");
    fflush(stdin);
    /*gets(ficha[i].autor);*/
    scanf("%30[^\n]s", &ficha[i].autor);
    printf("Digite a área do livro: ");
    fflush(stdin);
    /*gets(ficha[i].area);*/
    scanf("%30[^\n]s", &ficha[i].area);
    printf("Digite o ano: ");
    fflush(stdin);
    /*gets(ficha[i].ano);*/
    scanf("%d", &ficha[i].ano);
    printf("Digite o nome da editora: ");
    fflush(stdin);
    /*gets(ficha[i].editora);*/
    scanf("%30[^\n]s", &ficha[i].editora);
  }
  return (0);
}

