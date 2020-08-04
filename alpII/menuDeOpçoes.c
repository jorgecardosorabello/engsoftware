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
    printf("\n1 - Menu opção 1\n");
    printf("2 - Menu opção 2\n");
    printf("3 - Menu opção 3\n");
    printf("4 - Menu opção 4\n");
    printf("5 - Sair\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &op);
    fflush(stdin);
    if (op == 1)
    {
      system("cls");
      //instruções
      printf("escolhei opção 1");
    }
    else
    {
      if (op == 2)
      {
        system("cls");
        //instruções
        printf("escolhei opção 2");
      }
      else
      {
        if (op == 3)
        {
          system("cls");
          //instruções
          printf("escolhei opção 3");
        }
        else
        {
          if (op ==4)
          {
            system("cls");
            //instruções
            printf("escolhei opção 4");
          }
        }
      }
    }
  }
  return (0);
}