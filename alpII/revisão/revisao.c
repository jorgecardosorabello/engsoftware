#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#include <locale.h>

// declaração da struct pessoa
typedef struct cadastro
{
	char descricao[50];
	int quantidadeEstoque;
	int categoria;
	int lote;
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
		printf("\n1 - Cadastrar produto");
		printf("\n2 - Listar todos os produtos");
		printf("\n3 - Listar produto por categoria");
		printf("\n4 - Listar produto por lote");
		printf("\n0 - Sair");
		printf("\nEscolha OpÁ„o: ");
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
	printf("\n >>>> RAFAEL ALVES FLORINDO <<<<");
	printf("\n >>>> RA: 00000000-5 <<<< ");
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
			printf("\nInforme os dados do Produto: ");
			printf("\nDescricaÁ„o............: ");
			fflush(stdin);
			gets(produto[i].descricao);
			printf("\nQuantidade em estoque..: ");
			fflush(stdin);
			scanf("%d", &produto[i].quantidadeEstoque);
			printf("\nLote...................: ");
			scanf("%d", &produto[i].lote);
			printf("\nCategorias: \n[1] Alimentos | [2] Bebidas | [3] Limpeza");
			fflush(stdin);
			scanf("%d", &produto[i].categoria);
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
		while(1)//ir· percorrer todo o arquivo e quando não encontrar mais registros, o laÁo termina
		{
			Cadastroproduto p;//criando um registro temporário
		
			//leitura de registro por registro, ou seja, pega um registro
			int registro = fread(&p, sizeof(Cadastroproduto), 1, arq);
			
			//se a leitura do registro retornar 0, siginifica que a próxima posição do arquivo é zero ai saimos do laÁo
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

