//FUNCIONANDO NAO MEXER MAIS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

#define TAM 5

struct obra
{
  //int registro;
  int tipoObra;
  //1=Livro ou 2=Revista
  char titulo[30];
  char autor[30];
  char editora[30];
  int ISBN;
  int edicao;
  int ano;
  int quantExemplares;
  int caixa;
};

int main()
{
  struct obra cadastroObra[TAM];
  int i=0;
  int resp = 1;
  int op, busca, acha;
  op = 0;


  printf("\n>>>> JORGE CARDOSO RABELLO  <<<<");
  printf("\n>>>>     RA. 20117741-5     <<<<");
  printf("\n>>>> Engenharia de Software <<<<");
  printf("\n");
  printf("\n*************************************************************\n");

  while (op != 5)
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
      printf("1 - Cadastrar nova obra\n");
      printf("------------------------\n");
      while((resp == 1) && (i <= TAM))
      {
        printf("\nTipo de obra. Tecle [1] para livro ou para [2] revista: "); fflush(stdin); scanf("%d", &cadastroObra[i].tipoObra);
        //cadastroObra[i].registro = i+1;
        //printf("Registro: %d\n", cadastroObra[i].registro);
        printf("Título: "); fflush(stdin); gets(cadastroObra[i].titulo);
        printf("Autor: "); fflush(stdin); gets(cadastroObra[i].autor);
        printf("Editora: "); fflush(stdin); gets(cadastroObra[i].editora);
        printf("ISBN: "); fflush(stdin); scanf("%d", &cadastroObra[i].ISBN);
        printf("Edição: "); fflush(stdin); scanf("%d", &cadastroObra[i].edicao);
        printf("Ano: "); fflush(stdin); scanf("%d", &cadastroObra[i].ano);
        printf("Quantidade de exemplares: "); fflush(stdin); scanf("%d", &cadastroObra[i].quantExemplares);
        printf("Caixa: "); fflush(stdin); scanf("%d", &cadastroObra[i].caixa);

        printf("\nDeseja cadastrar novo registro? Se sim, tecle 1: ");
        fflush(stdin);
        scanf("%d", &resp);
        if(resp == 1){
          i++;
        };
      }
        printf("\n\n*************************************************************\n");

    }else{
      if (op == 2)
      {
        system("clear");
        //system("cls");
        printf("2 - Listar Livros.\n");
        printf("------------------------\n");
        for (i=0; i<TAM; i++)
        {
          if(cadastroObra[i].tipoObra == 1){
            //printf("Livro %d: \n", i+1);
            printf("TÍTULO: %s\n", cadastroObra[i].titulo);
            printf("AUTOR: %s\n", cadastroObra[i].autor);
            printf("EDITORA: %s\n", cadastroObra[i].editora);
            printf("ISBN: %d\n", cadastroObra[i].ISBN);
            printf("EDIÇÃO: %d\n", cadastroObra[i].edicao);
            printf("ANO: %d\n", cadastroObra[i].ano);
            printf("QUANTIDADE DE EXEMPLARES: %d\n", cadastroObra[i].quantExemplares);
            printf("CAIXA: %d\n", cadastroObra[i].caixa);
            printf("\n*************************************************************\n");
          }
        }
        printf("\n\n");
      }else{
        if (op == 3)
        {
          system("clear");
          //system("cls");
          printf("3 - Listar Revistas.\n");
          printf("------------------------\n");
          for (i=0; i<TAM; i++)
          {
            if(cadastroObra[i].tipoObra == 2){
              //printf("Revista %d: \n", i+1);
              printf("TÍTULO: %s\n", cadastroObra[i].titulo);
              printf("AUTOR: %s\n", cadastroObra[i].autor);
              printf("EDITORA: %s\n", cadastroObra[i].editora);
              printf("ISBN: %d\n", cadastroObra[i].ISBN);
              printf("EDIÇÃO: %d\n", cadastroObra[i].edicao);
              printf("ANO: %d\n", cadastroObra[i].ano);
              printf("QUANTIDADE DE EXEMPLARES: %d\n", cadastroObra[i].quantExemplares);
              printf("CAIXA: %d\n", cadastroObra[i].caixa);
              printf("\n*************************************************************\n");
            }
          }
        printf("\n\n");
        }else{
          if (op ==4)
          {
            system("clear");
            printf("4 - Listar obras por caixa.\n");
            printf("---------------------------\n");
            printf("\nDigite a caixa que deseja buscar: ");
            scanf ("%d", &busca);
            acha = 0;
            printf("Obras na caixa %d: \n", busca);
            for(i=0;i<=TAM;i++)
            {
              if(cadastroObra[i].caixa == busca)
                {
                  printf("TÍTULO: %s", cadastroObra[i].titulo);
                  printf("\n");
                  printf("AUTOR: %s", cadastroObra[i].autor);
                  printf("\n");
                  printf("EDITORA: %s", cadastroObra[i].editora);
                  printf("\n");
                  printf("ISBN: %d", cadastroObra[i].ISBN);
                  printf("\n");
                  printf("EDIÇÃO: %d", cadastroObra[i].edicao);
                  printf("\n");
                  printf("ANO: %d", cadastroObra[i].ano);
                  printf("\n");
                  printf("QUANTIDADE DE EXEMPLARES: %d", cadastroObra[i].quantExemplares);
                  printf("\n");
                  printf("CAIXA: %d", cadastroObra[i].caixa);
                  printf("\n");
                  printf("*************************************************************\n");
                  acha++;
                }
            }
            if(acha == 0){
                printf("\n Caixa vazia!");
            }
            printf("\n\n");
          }
        }
      }
    }
  }
  return (0);
}

