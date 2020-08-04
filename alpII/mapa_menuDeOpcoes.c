#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

#define TAM 20

int main()
{
  int op;
  op = 0;
  while (op !=5)
  {
    printf("\n1 - Cadastrar nova obra\n");
    printf("2 - Listar Livros.\n");
    printf("3 - Listar Revistas.\n");
    printf("4 - Listar obras por caixa.\n");
    printf("5 - Sair\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &op);
    fflush(stdin);
    if (op == 1)
    {
      system("clear");
      //system("cls");
      //instruções
      printf("1 - Cadastrar nova obra");
    	printf("\n\n*************************************************************\n");

    }
    else
    {
      if (op == 2)
      {
        system("clear");
        //system("cls");
        //instruções
        printf("2 - Listar Livros.");
        printf("\n\n*************************************************************\n");
      }
      else
      {
        if (op == 3)
        {
          system("clear");
          //system("cls");
          //instruções
          printf("3 - Listar Revistas.");
          printf("\n\n*************************************************************\n");
        }
        else
        {
          if (op ==4)
          {
            system("clear");
            //system("cls");
            //instruções
            printf("4 - Listar obras por caixa.");
            printf("\n\n*************************************************************\n");
          }
        }
      }
    }
  }
  return (0);
}