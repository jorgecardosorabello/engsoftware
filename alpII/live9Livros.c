#include <stdio.h>
#include <stdlib.h>
#define MAX 2
#include <locale.h>

struct Dados
{
	int codigo;
	char titulo[30];
	char autor[30];
	char area[30];
	int ano;
};

struct Dados ficha[MAX];

void cadastrar(struct Dados ficha[MAX]);
void listar(struct Dados ficha[MAX]);
void buscar(int codigo, struct Dados ficha[MAX]);

int main()
{
  int codigoBuscar;
	setlocale(LC_ALL, "Portuguese");
  system("clear");
  //cadastrar
  cadastrar(ficha);
  //listar algo
  listar(ficha);
  //buscar algo
  printf("Informe o código que deseja buscar: ");
  scanf("%d", &codigoBuscar);
  buscar(codigoBuscar, ficha);

  return 0;
}

void cadastrar(struct Dados ficha[MAX]){
  int i;
  system("clear");
  for(i=0;i<MAX;i++){
    printf("\n CODIGO: "); fflush(stdin); scanf("%d", &ficha[i].codigo);
    printf("\n TITULO: "); fflush(stdin); gets(ficha[i].titulo);
    printf("\n AUTOR: "); fflush(stdin); gets(ficha[i].autor);
    printf("\n AREA: "); fflush(stdin); gets(ficha[i].area);
    printf("\n ANO: "); fflush(stdin); scanf("%d", &ficha[i].ano);
    system("clear");
  }
}
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