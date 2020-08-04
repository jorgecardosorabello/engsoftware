#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 5

struct Dados
{
	int tipodeobra;
	char titulo[30];
	char autor[30];
	char editora[30];
  int isbn;
  int edicao;
  int ano;
  int exemplares;
	int caixa;
};

struct Dados ficha[MAX];

//prototipação das funções
void cadastrar(struct Dados ficha[MAX]);
void listarLivro(struct Dados ficha[MAX]);
void listarRevista(struct Dados ficha[MAX]);
void buscar(int caixaBuscar, struct Dados ficha[MAX]);

int main()
{
	setlocale(LC_ALL, "Portuguese");
  system("clear");
  int caixaBuscar, op, i;
  op = 0;
  
  printf("\n >>>>   JORGE CARDOSO RABELLO   <<<< ");
  printf("\n >>>>      RA: 20117741-5       <<<< ");
  printf("\n >>>>  ENGENHARIA DE SOFTWARE   <<<< ");
  printf("\n\n***************************************\n\n");


  do{
    printf("\n1 - Cadastrar nova obra\n");
    printf("2 - Listar Livros.\n");
    printf("3 - Listar Revistas.\n");
    printf("4 - Listar obras por caixa.\n");
    printf("0 - Sair\n\n");
    printf("Digite a opção desejada: ");
    fflush(stdin);
    scanf("%d", &op);
    switch(op)
    {
      case 1:
        system("clear");
        //system("cls");
        //cadastrar
        cadastrar(ficha);
        
        printf("\n\n***************************************\n");
        break;

      case 2:
        system("clear");
        //system("cls")
        //listar livros
        listarLivro(ficha);
        printf("\n\n***************************************\n");
        system("pause");
        break;

      case 3:
        system("clear");
        //system("cls")
        //listar revistas
        listarRevista(ficha);
        printf("\n\n***************************************\n");
        system("pause");
        break;

      case 4: 
        system("clear");
        //system("cls");
        printf("4 - Listar obras por caixa.");
        //buscar algo
        printf("\n\nCaixas cadastradas:\n\n");
        for(i=0;i<=MAX;i++){
          printf("%d ", ficha[i].caixa);
        }
        printf("\n\nInforme a caixa que deseja buscar: ");
        scanf("%d", &caixaBuscar);
        buscar(caixaBuscar, ficha);
        printf("\n\n***************************************\n");
        printf("\n");
        system("pause");
        break;

      case 0:
        printf("\nSaindo do sistema!!!");
        break;
      default:
        printf("Valor indefinido");
        system("pause");
        break;
    }	
  }while(op!=0);
  return 0;
}



//função de cadastrar
void cadastrar(struct Dados ficha[MAX]){
  int i=0;
  char resp = 's';

  while(((resp == 's')||(resp == 'S')) && (i <= MAX))
    {
      printf("\n TIPO DE OBRA, LIVRO[1] OU REVISTA[2]: "); fflush(stdin); scanf("%d", &ficha[i].tipodeobra);
      printf("\n TITULO: "); fflush(stdin); gets(ficha[i].titulo);
      printf("\n AUTOR: "); fflush(stdin); gets(ficha[i].autor);
      printf("\n EDITORA: "); fflush(stdin); gets(ficha[i].editora);
      printf("\n ISBN: "); fflush(stdin); scanf("%d", &ficha[i].isbn);
      printf("\n EDIÇÃO: "); fflush(stdin); scanf("%d", &ficha[i].edicao);
      printf("\n ANO: "); fflush(stdin); scanf("%d", &ficha[i].ano);
      printf("\n EXEMPLARES: "); fflush(stdin); scanf("%d", &ficha[i].exemplares);
      printf("\n caixa: "); fflush(stdin); scanf("%d", &ficha[i].caixa);
      system("clear");

      printf("\nDeseja cadastrar novo registro [s] ou [n]?: ");
      fflush(stdin);
      scanf("%c", &resp);
      if((resp == 's')||(resp=='S') ){
        i++;
      }
  }
}

//função de listar Livros
void listarLivro(struct Dados ficha[MAX]){
  int i;
  system("clear");
  printf(" LIVROS CADASTRADOS ");
  for(i=0;i<=MAX;i++){
    if(ficha[i].tipodeobra == 1)
    {
      printf("\n\n******************************\n");
      
      printf("\n TITULO: %s", ficha[i].titulo);
      printf("\n AUTOR: %s", ficha[i].autor);
      printf("\n EDITORA: %s", ficha[i].editora);
      printf("\n ISBN: %d", ficha[i].isbn);
      printf("\n EDIÇÃO: %d", ficha[i].edicao);
      printf("\n ANO: %d", ficha[i].ano);
      printf("\n EXEMPLARES: %d", ficha[i].exemplares);
      printf("\n CAIXA: %d", ficha[i].caixa);
    }
  }
}

//função de listar Revistas
void listarRevista(struct Dados ficha[MAX]){
  int i;
  system("clear");
  printf(" REVISTAS CADASTRADAS: ");
  for(i=0;i<=MAX;i++){
    if(ficha[i].tipodeobra == 2)
    {
      printf("\n\n******************************\n");
      
      printf("\n TITULO: %s", ficha[i].titulo);
      printf("\n AUTOR: %s", ficha[i].autor);
      printf("\n EDITORA: %s", ficha[i].editora);
      printf("\n ISBN: %d", ficha[i].isbn);
      printf("\n EDIÇÃO: %d", ficha[i].edicao);
      printf("\n ANO: %d", ficha[i].ano);
      printf("\n EXEMPLARES: %d", ficha[i].exemplares);
      printf("\n CAIXA: %d", ficha[i].caixa);
    }
  }
}

//função de buscar
void buscar(int caixaBuscar, struct Dados ficha[MAX])
{
  int i;
  int acha = 0;
  system("clear");
  printf("OBRAS CADASTRADAS NA CAIXA %d", caixaBuscar);
  for(i=0;i<=MAX;i++){
    if(caixaBuscar == ficha[i].caixa){
      printf("\n\n******************************\n");
      printf("\n TIPO DE OBRA: ");
      if(ficha[i].tipodeobra == 1){
        printf(" LIVRO");
      }else{
        if(ficha[i].tipodeobra == 2){
          printf(" REVISTA");
        }else{
          printf(" NÃO ESPECIFICADO");
        }
      }
      printf("\n TITULO: %s", ficha[i].titulo);
      printf("\n AUTOR: %s", ficha[i].autor);
      printf("\n EDITORA: %s", ficha[i].editora);
      printf("\n ISBN: %d", ficha[i].isbn);
      printf("\n EDIÇÃO: %d", ficha[i].edicao);
      printf("\n ANO: %d", ficha[i].ano);
      printf("\n EXEMPLARES: %d", ficha[i].exemplares);
      printf("\n CAIXA: %d", ficha[i].caixa);
      acha++;
    }
  }
  if(acha == 0){
    printf("\nCaixa vazia!");
  }
}