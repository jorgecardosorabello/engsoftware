#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int codigoProduto;

	printf("Digite o código do produto: ");
	scanf("%d", &codigoProduto);

	switch(codigoProduto){
		case 1: printf("\n%d - Alimento não perecível.", codigoProduto); break;
		case 2:
		case 3:
		case 4: printf("\n%d - Alimento perecível.", codigoProduto); break;
		case 5:
		case 6: printf("\n%d - Vestuário.", codigoProduto); break;
		case 7: printf("\n%d - Higiene Pessoal.", codigoProduto); break;

		default: printf("\n%d - Código Inválido.", codigoProduto); break;
	}

}