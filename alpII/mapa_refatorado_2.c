#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#include <locale.h>

// declaração da struct pessoa
typedef struct cadastro
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
} Cadastroproduto;

//prototipação das funções
void identificacao();
void cadastrarProduto(Cadastroproduto produto[MAX]);
void ListarTodosProdutos(Cadastroproduto produto[MAX]);
void ListarProdutosCategoria(int buscaCategoria, Cadastroproduto produto[MAX]);
void ListarProdutosLote(int buscaLote, Cadastroproduto produto[MAX]);
int contarRegistro(Cadastroproduto produto[MAX]);

int main()
{
	//declaraÁ„o do vetor de registro do tipo produto
	Cadastroproduto produto[MAX];
	setlocale(LC_ALL, "Portuguese");
	
	int op, buscaLote, buscaCategoria;
	do{
		identificacao();
		printf("\n1 - Cadastrar nova obra");
		printf("\n2 - Listar livros");
		printf("\n3 - Listar revitas");
		printf("\n4 - Listar obras por caixa");
		printf("\n0 - Sair");
		printf("\nEscolha Opção: ");
		scanf("%d", &op);
		
		switch(op){
			case 1:
				cadastrarProduto(produto);
				break;
			case 2:
				ListarTodosProdutos(produto);
				printf("\n");
				system("pause");
				break;
			case 3: 		
				printf("Informe a categoria do produto");;
				fflush(stdin);
				scanf("%d", &buscaCategoria);
				ListarProdutosCategoria(buscaCategoria, produto);
				printf("\n");
				system("pause");
				break;
			case 4: 
				printf("Informe o Lote do produto");;
				fflush(stdin);
				scanf("%d", &buscaLote);
				ListarProdutosLote(buscaLote, produto);
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

void identificacao(){
	system("cls");
	int t;
	for(t=0; t<80; t++) printf("-");
	printf("\n >>>> JORGE CARDOSO RABELLO <<<<");
	printf("\n >>>> RA: 20117741-5 <<<< ");
	printf("\n >>>> Engenharia de Software <<<< \n");
	for(t=0; t<80; t++) printf("-");
}
void cadastrarProduto(Cadastroproduto produto[MAX])
{
	identificacao();
	int i;
	FILE * arq;
 
	arq = fopen("dadosProdutos.txt", "a+");

	if(arq != NULL)
	{
		for(i = 0; i < 2; i++){
      printf("\nTipo de obra. Tecle [1] para livro ou para [2] revista: "); fflush(stdin); scanf("%d", &produto[i].tipoObra);
      printf("Título: "); fflush(stdin); gets(produto[i].titulo);
      printf("Autor: "); fflush(stdin); gets(produto[i].autor);
      printf("Editora: "); fflush(stdin); gets(produto[i].editora);
      printf("ISBN: "); fflush(stdin); scanf("%d", &produto[i].ISBN);
      printf("Edição: "); fflush(stdin); scanf("%d", &produto[i].edicao);
      printf("Ano: "); fflush(stdin); scanf("%d", &produto[i].ano);
      printf("Quantidade de exemplares: "); fflush(stdin); scanf("%d", &produto[i].quantExemplares);
      printf("Caixa: "); fflush(stdin); scanf("%d", &produto[i].caixa);
			fwrite(&produto[i], sizeof(Cadastroproduto), 1, arq);
		}
		fclose(arq); // aborta o programa
	}
	else
	{
		printf("\nErro ao abrir o arquivo para leitura!\n");
		exit(1); // aborta o programa
	}
}

int contarRegistro(Cadastroproduto produto[MAX])
{
	FILE * arq = fopen("dadosProdutos.txt", "r");
	if(arq != NULL)
	{
		int contador = 0;
		while(1)//irá percorrer todo o arquivo e quando não encontrar mais registros, o laço termina
		{
			Cadastroproduto p;//criando um registro temporário
		
			//leitura de registro por registro, ou seja, pega um registro
			int registro = fread(&p, sizeof(Cadastroproduto), 1, arq);
			
			//se a leitura do registro retornar 0, siginifica que a próxima posição do arquivo é zero ai saimos do laço
			if(registro < 1)
				break;
			else
				produto[contador] = p;//pega registro lido e colocar vetor de registro
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

void ListarTodosProdutos(Cadastroproduto produto[MAX]){	
	identificacao();
	
	int quantidadeproduto = contarRegistro(produto);
	int i;
	
	printf("\n>>>> Lista de produtos <<<< %d\n", quantidadeproduto);
	
	printf("ITEM \t| DESCRIÇÃO \t\t| QUANTIDADE \t| CATEGORIA \t | LOTE");
	for(i = 0; i < quantidadeproduto; i++)
	{
		printf("\n%d \t| %s  \t \t| %d \t\t | %d \t\t | %d", i+1, produto[i].descricao, produto[i].quantidadeEstoque, produto[i].categoria, produto[i].lote);	
	}
}

void ListarProdutosCategoria(int buscaCategoria, Cadastroproduto produto[MAX]){	
	identificacao();
	
	int quantidadeproduto = contarRegistro(produto);
	int i;
	
	printf("\n>>>> Lista de Produtos por categoria <<<< \n");
	if (buscaCategoria == 1) {
		printf("Categoria pesquisada: Alimentos \n");	
	}else if (buscaCategoria == 2) {
		printf("Categoria pesquisada: Bebidas \n");	
	}else if (buscaCategoria == 3) {
		printf("Categoria pesquisada: Limpeza \n");	
	}
	
	printf("ITEM \t| DESCRI«√O \t\t| QUANTIDADE \t| CATEGORIA \t | LOTE");
	for(i = 0; i < quantidadeproduto; i++)
	{
		if(produto[i].lote == buscaCategoria){
			printf("\n%d \t| %s  \t \t| %d \t\t | %d \t\t | %d", i+1, produto[i].descricao, produto[i].quantidadeEstoque, produto[i].categoria, produto[i].lote);	
		}
	}
}
void ListarProdutosLote(int buscarLote, Cadastroproduto produto[MAX]){
	identificacao();
	
	int quantidadeproduto = contarRegistro(produto);
	int i;
	
	printf("\n>>>> Lista de Produtos por lote <<<< \n");
	printf("Lote pesquisado: %d \n", buscarLote);
	
	printf("CODIGO \t| DESCRI«√O \t\t| QUANTIDADE \t| CATEGORIA \t | LOTE");
	for(i = 0; i < quantidadeproduto; i++)
	{
		if(produto[i].lote == buscarLote){
			printf("\n%d \t| %s  \t \t| %d \t\t | %d \t\t | %d", i+1, produto[i].descricao, produto[i].quantidadeEstoque, produto[i].categoria, produto[i].lote);	
		}
	}
}

