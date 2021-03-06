//REDME:
//O Sistema foi criado em Sistema Operacional MAC OS por favor atentar para o system("clear") e system("cls")
//
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 15

typedef struct cadastro
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
} CadastroObra;

//prototipação das funções
void cadastrar (CadastroObra obras[MAX]);
//void listarLivro (CadastroObra obras[MAX]);
//void listarRevista (CadastroObra obras[MAX]);
void buscar(int caixaBuscar, CadastroObra obras[MAX]);
int contarRegistro (CadastroObra obras[MAX]);
//função de teste busca categoria
void ListarObrasCategoria(int buscaCategoria, CadastroObra obras[MAX]);


int main()
{
  CadastroObra obras[MAX];
	setlocale(LC_ALL, "Portuguese");
  system("clear");
  //system("cls");
  int caixaBuscar, op;
  op = 0;
  int buscaCategoria;
  
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
        cadastrar(obras);
        
        printf("\n\n***************************************\n");
        break;

      case 2:
        system("clear");
        //system("cls")
        buscaCategoria = 1;
        ListarObrasCategoria(buscaCategoria, obras);
        printf("\n\n***************************************\n");
        system("pause");
        break;

      case 3:
        system("clear");
        //system("cls")
        //listar revistas

        buscaCategoria = 2;
        ListarObrasCategoria(buscaCategoria, obras);
        printf("\n\n***************************************\n");
        system("pause");
        break;

      case 4: 
        system("clear");
        //system("cls");
        printf("4 - Listar obras por caixa.");
        //buscar algo
        
        printf("\n\nInforme a caixa que deseja buscar: ");
        scanf("%d", &caixaBuscar);
        buscar(caixaBuscar, obras);
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
void cadastrar (CadastroObra obras[MAX]){
  int i=0;
  char resp = 's';
  FILE * arq;

  arq = fopen("sistema_201177415.txt", "a+");

  if(arq != NULL){
    for(i = 0; i < 2; i++){
      while((resp == 's')||(resp == 'S')){
        printf("\n TIPO DE OBRA, LIVRO[1] OU REVISTA[2]: ");
        fflush(stdin);
        scanf("%d", &obras[i].tipodeobra);
        printf("\n TITULO: ");
        fflush(stdin);
        gets(obras[i].titulo);
        printf("\n AUTOR: ");
        fflush(stdin);
        gets(obras[i].autor);
        printf("\n EDITORA: ");
        fflush(stdin);
        gets(obras[i].editora);
        printf("\n ISBN: ");
        fflush(stdin);
        scanf("%d", &obras[i].isbn);
        printf("\n EDIÇÃO: ");
        fflush(stdin);
        scanf("%d", &obras[i].edicao);
        printf("\n ANO: ");
        fflush(stdin);
        scanf("%d", &obras[i].ano);
        printf("\n EXEMPLARES: ");
        fflush(stdin);
        scanf("%d", &obras[i].exemplares);
        printf("\n caixa: ");
        fflush(stdin);
        scanf("%d", &obras[i].caixa);
        system("clear");
        //system("cls");

        printf("\nDeseja cadastrar novo registro [s] ou [n]?: ");
        fflush(stdin);
        scanf("%c", &resp);
        fwrite(&obras[i], sizeof(CadastroObra), 1, arq);
      }
      fclose(arq);
		}
  }
  else
  {
    printf("\nErro ao abrir o arquivo para leitura!\n");
		exit(1);
  }
}


//função contar Registro
int contarRegistro (CadastroObra obras[MAX])
{
  FILE * arq = fopen("sistema_201177415.txt", "r");
	if(arq != NULL)
	{
		int contador = 0;
		while(1)
		{
		  CadastroObra p;
      int registro = fread(&p, sizeof (CadastroObra), 1, arq);

      if(registro < 1)
        break;
      else
        obras[contador] = p;
      contador++;
		}
		fclose(arq);
		return contador;
	}
	else
	{
		printf("\nErro ao abrir o arquivo para leitura!\n");
		exit(1); 
	}
}


void ListarObrasCategoria(int buscaCategoria, CadastroObra obras[MAX]){	
	
	int quantidadeproduto = contarRegistro(obras);
	int i;
	
	if (buscaCategoria == 1) {
    system("clear");
    //system("cls");
    printf(" LIVROS CADASTRADOS ");
    for(i=0;i<quantidadeproduto;i++){
      if(obras[i].tipodeobra == 1)
      {
        printf("\n\n******************************\n");
        
        printf("\n TITULO: %s", obras[i].titulo);
        printf("\n AUTOR: %s", obras[i].autor);
        printf("\n EDITORA: %s", obras[i].editora);
        printf("\n ISBN: %d", obras[i].isbn);
        printf("\n EDIÇÃO: %d", obras[i].edicao);
        printf("\n ANO: %d", obras[i].ano);
        printf("\n EXEMPLARES: %d", obras[i].exemplares);
        printf("\n CAIXA: %d", obras[i].caixa);
      }
    }
	}else if (buscaCategoria == 2) {
    system("clear");
    //system("cls");
		printf("  REVISTAS CADASTRADAS: ");
    for(i=0;i<quantidadeproduto;i++){
      if(obras[i].tipodeobra == 2)
      {
        printf("\n\n******************************\n");
        
        printf("\n TITULO: %s", obras[i].titulo);
        printf("\n AUTOR: %s", obras[i].autor);
        printf("\n EDITORA: %s", obras[i].editora);
        printf("\n ISBN: %d", obras[i].isbn);
        printf("\n EDIÇÃO: %d", obras[i].edicao);
        printf("\n ANO: %d", obras[i].ano);
        printf("\n EXEMPLARES: %d", obras[i].exemplares);
        printf("\n CAIXA: %d", obras[i].caixa);
      }
    }
	}else if ((buscaCategoria != 1)||(buscaCategoria != 2)) {
		printf("Tipo de obra não cadastrada. \n");	
	}
	
}

//função de buscar
void buscar(int caixaBuscar, CadastroObra obras[MAX])
{
  int i;
  int acha = 0;
  system("clear");
  //system("cls");
  printf("OBRAS CADASTRADAS NA CAIXA %d", caixaBuscar);
  for(i=0;i<=MAX;i++){
    if(caixaBuscar == obras[i].caixa){
      printf("\n\n******************************\n");
      printf("\n TIPO DE OBRA: ");
      if(obras[i].tipodeobra == 1){
        printf(" LIVRO");
      }else{
        if(obras[i].tipodeobra == 2){
          printf(" REVISTA");
        }else{
          printf(" NÃO ESPECIFICADO");
        }
      }
      printf("\n TITULO: %s", obras[i].titulo);
      printf("\n AUTOR: %s", obras[i].autor);
      printf("\n EDITORA: %s", obras[i].editora);
      printf("\n ISBN: %d", obras[i].isbn);
      printf("\n EDIÇÃO: %d", obras[i].edicao);
      printf("\n ANO: %d", obras[i].ano);
      printf("\n EXEMPLARES: %d", obras[i].exemplares);
      printf("\n CAIXA: %d", obras[i].caixa);
      acha++;
    }
  }
  if(acha == 0){
    printf("\nCaixa vazia!");
  }
}