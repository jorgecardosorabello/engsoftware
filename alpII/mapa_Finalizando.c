#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 5

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
void listarLivro (CadastroObra obras[MAX]);
void listarRevista (CadastroObra obras[MAX]);
void buscar(int caixaBuscar, CadastroObra obras[MAX]);
int contarRegistro (CadastroObra obras[MAX]);

int main()
{
  CadastroObra obras[MAX];
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
        cadastrar(obras);
        
        printf("\n\n***************************************\n");
        break;

      case 2:
        system("clear");
        //system("cls")
        //listar livros
        listarLivro(obras);
        printf("\n\n***************************************\n");
        system("pause");
        break;

      case 3:
        system("clear");
        //system("cls")
        //listar revistas
        listarRevista(obras);
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
  int j=0;
  char resp = 's';
  FILE * arq;

  arq = fopen("entradasMapa.txt", "a+");

  if(arq != NULL)
  {
    for(j = 0; j < 2; j++){
      while(((resp == 's')||(resp == 'S')) && (i <= MAX)){
        printf("\n TIPO DE OBRA, LIVRO[1] OU REVISTA[2]: "); fflush(stdin); scanf("%d", &obras[i].tipodeobra);
        printf("\n TITULO: "); fflush(stdin); gets(obras[i].titulo);
        printf("\n AUTOR: "); fflush(stdin); gets(obras[i].autor);
        printf("\n EDITORA: "); fflush(stdin); gets(obras[i].editora);
        printf("\n ISBN: "); fflush(stdin); scanf("%d", &obras[i].isbn);
        printf("\n EDIÇÃO: "); fflush(stdin); scanf("%d", &obras[i].edicao);
        printf("\n ANO: "); fflush(stdin); scanf("%d", &obras[i].ano);
        printf("\n EXEMPLARES: "); fflush(stdin); scanf("%d", &obras[i].exemplares);
        printf("\n caixa: "); fflush(stdin); scanf("%d", &obras[i].caixa);
        system("clear");

        printf("\nDeseja cadastrar novo registro [s] ou [n]?: ");
        fflush(stdin);
        scanf("%c", &resp);
        if((resp == 's')||(resp=='S')){
          i++;
        }
        fwrite(&obras[i], sizeof (CadastroObra), 1, arq);
      }
		}
    fclose(arq); //aborta o programa
  }
  else
  {
    printf("\nErro ao abrir o arquivo para leitura!\n");
		exit(1); // aborta o programa
  }
}






//função contar Registro
int contarRegistro (CadastroObra obras[MAX])
{
  FILE * arq = fopen("entradasMapa.txt", "r");
	if(arq != NULL)
	{
		int contador = 0;
		while(1)//irá percorrer todo o arquivo e quando não encontrar mais registros, o laço termina
		{
		 CadastroObra p;//criando um registro temporário
		
			//leitura de registro por registro, ou seja, pega um registro
			int registro = fread(&p, sizeof (CadastroObra), 1, arq);
			
			//se a leitura do registro retornar 0, siginifica que a próxima posição do arquivo é zero ai saimos do laço
			if(registro < 1)
				break;
			else
				obras[contador] = p;//pega registro lido e colocar vetor de registro
			contador++;
		}
		fclose(arq); // fecha o arquivo
		return contador;//retorna a quantidade de registros que há no arquivo
	}
	else
	{
		printf("\nErro ao abrir o arquivo para leitura!\n");
		exit(1); // aborta o programa
	}
}




//função de listar Livros
void listarLivro (CadastroObra obras[MAX]){
  system("clear");
  int i;
  int quantidadeproduto = contarRegistro(obras);
  
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
}

//função de listar Revistas
void listarRevista (CadastroObra obras[MAX]){
  system("clear");
  int i;
  int quantidadeproduto = contarRegistro(obras);
  printf(" REVISTAS CADASTRADAS: ");
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
}

//função de buscar
void buscar(int caixaBuscar, CadastroObra obras[MAX])
{
  int i;
  int acha = 0;
  system("clear");
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



