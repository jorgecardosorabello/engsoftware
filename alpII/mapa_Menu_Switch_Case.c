#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

#define TAM 5

struct obra
{
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
	setlocale(LC_ALL, "Portuguese");
  struct obra cadastroObra[TAM];
  int i=0;
  char resp = 's';
  int op, busca, acha;
  op = 0;

  printf("\n>>>> JORGE CARDOSO RABELLO  <<<<");
  printf("\n>>>>     RA. 20117741-5     <<<<");
  printf("\n>>>> Engenharia de Software <<<<");
  printf("\n");
  printf("\n*************************************************************\n");

	do{
		printf("\n1 - Cadastrar nova obra");
		printf("\n2 - Listar Livros.");
		printf("\n3 - Listar Revistas.");
		printf("\n4 - Listar obras por caixa.");
		printf("\n0 - Sair");
		printf("\nEscolha Opção: ");
		scanf("%d", &op);
		switch(op)
		{
			case 1:
        system("clear");
        //system("cls");
        printf("1 - Cadastrar nova obra\n");
        printf("------------------------\n");
        while(((resp == 's')||(resp == 'S')) && (i <= TAM))
        {
          printf("\nTipo de obra. Tecle [1] para livro ou para [2] revista: "); fflush(stdin); scanf("%d", &cadastroObra[i].tipoObra);
          printf("Título: "); fflush(stdin); gets(cadastroObra[i].titulo);
          printf("Autor: "); fflush(stdin); gets(cadastroObra[i].autor);
          printf("Editora: "); fflush(stdin); gets(cadastroObra[i].editora);
          printf("ISBN: "); fflush(stdin); scanf("%d", &cadastroObra[i].ISBN);
          printf("Edição: "); fflush(stdin); scanf("%d", &cadastroObra[i].edicao);
          printf("Ano: "); fflush(stdin); scanf("%d", &cadastroObra[i].ano);
          printf("Quantidade de exemplares: "); fflush(stdin); scanf("%d", &cadastroObra[i].quantExemplares);
          printf("Caixa: "); fflush(stdin); scanf("%d", &cadastroObra[i].caixa);

          printf("\nDeseja cadastrar novo registro [s] ou [n]?: ");
          fflush(stdin);
          scanf("%c", &resp);
          if((resp == 's')||(resp=='S') ){
            i++;
          };
        }
				break;
			case 2:
        system("clear");
        //system("cls");
        printf("Livros cadastrados: \n");
        printf("------------------------\n");
        for (i=0; i<TAM; i++)
        {
          if(cadastroObra[i].tipoObra == 1){
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
				system("pause");
				break;
			case 3: 		
        system("clear");
        //system("cls");
        printf("Revistas cadastradas:\n");
        printf("------------------------\n");
        for (i=0; i<TAM; i++)
        {
          if(cadastroObra[i].tipoObra == 2){
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
				fflush(stdin);
				printf("\n");
				system("pause");
				break;
			case 4: 
        system("clear");
        //system("cls");
        printf("Listar obras por caixa.\n");
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