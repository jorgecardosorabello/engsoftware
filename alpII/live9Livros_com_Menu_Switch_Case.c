#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 4

struct Dados
{
	int codigo;
	char titulo[30];
	char autor[30];
	char area[30];
	int ano;
};

struct Dados ficha[MAX];

//prototipação das funções
void cadastrar(struct Dados ficha[MAX]);
void listar(struct Dados ficha[MAX]);
void buscar(int codigo, struct Dados ficha[MAX]);

int main()
{
	setlocale(LC_ALL, "Portuguese");
  system("clear");
  int codigoBuscar, op;
  op = 0;
  
  printf("\n >>>>   JORGE CARDOSO RABELLO   <<<< ");
  printf("\n >>>>      RA: 20117741-5       <<<< ");
  printf("\n >>>>  ENGENHARIA DE SOFTWARE   <<<< ");
  printf("\n\n*****************************************\n\n");

  while (op !=5)
  {
    printf("\n1 - Cadastrar nova obra\n");
    printf("2 - Listar Livros.\n");
    printf("3 - Listar Revistas.\n");
    printf("4 - Listar obras por caixa.\n");
    printf("5 - Sair\n");
    printf("Digite a opção desejada: ");
    fflush(stdin);
    scanf("%d", &op);
    if (op == 1)
    {
      system("clear");
      //system("cls");
      //instruções
      //cadastrar
      cadastrar(ficha);
    	
      printf("\n\n*************************************************************\n");
    }
    else
    {
      if (op == 2)
      {
        system("clear");
        //system("cls")
        //listar algo
        listar(ficha);

        printf("\n\n*************************************************************\n");
      }
      else
      {
        if (op == 3)
        {
          system("clear");
          //system("cls");
          //listar algo
          listar(ficha);
          printf("\n\n*************************************************************\n");
        }
        else
        {
          if (op == 4)
          {
            system("clear");
            //system("cls");
            //instruções
            //printf("4 - Listar obras por caixa.");
            //buscar algo
            printf("\nInforme o código que deseja buscar: ");
            scanf("%d", &codigoBuscar);
            buscar(codigoBuscar, ficha);
            printf("\n\n*************************************************************\n");
          }
        }
      }
    }
  }
  return 0;
}







//FUNCOES


//função de cadastrar
void cadastrar(struct Dados ficha[MAX]){
  int i;
  char resp = 's';

  while(((resp == 's')||(resp == 'S')) && (i <= MAX))
    {
      printf("\n CODIGO: "); fflush(stdin); scanf("%d", &ficha[i].codigo);
      printf("\n TITULO: "); fflush(stdin); gets(ficha[i].titulo);
      printf("\n AUTOR: "); fflush(stdin); gets(ficha[i].autor);
      printf("\n AREA: "); fflush(stdin); gets(ficha[i].area);
      printf("\n ANO: "); fflush(stdin); scanf("%d", &ficha[i].ano);
      system("clear");

      printf("\nDeseja cadastrar novo registro [s] ou [n]?: ");
      fflush(stdin);
      scanf("%c", &resp);
      if((resp == 's')||(resp=='S') ){
        i++;
      }
  }
}










//função de listar
void listar(struct Dados ficha[MAX]){
  int i;
  system("clear");
  for(i=0;i<MAX;i++){
    printf("\n\n******************************\n");
    printf("\n CODIGO: %d", ficha[i].codigo);
    printf("\n TITULO: %s", ficha[i].titulo);
    printf("\n AUTOR: %s", ficha[i].autor);
    printf("\n AREA: %s", ficha[i].area);
    printf("\n ANO: %d", ficha[i].ano);
  }
}












//função de buscar
void buscar(int codigo, struct Dados ficha[MAX])
{
  int i;
  char achou = 'f';
  system("clear");
  for(i=0;i<MAX;i++){

    if(codigo == ficha[i].codigo){
      printf("\n\n******************************\n");
      printf("\n CODIGO: %d", ficha[i].codigo);
      printf("\n TITULO: %s", ficha[i].titulo);
      printf("\n AUTOR: %s", ficha[i].autor);
      printf("\n AREA: %s", ficha[i].area);
      printf("\n ANO: %d", ficha[i].ano);
      achou = 's';
    }
  }
  if(achou !='s') printf("Registro não encontrado!");

}