#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");

	int codigo;

	printf("Digite o código entre [1 e 6]: ");
	scanf("%d", &codigo);

	switch(codigo){
		case 1: printf("%d Produto do Sul", codigo); break;
		case 2: printf("%d Produto do Norte", codigo); break;
		case 3: printf("%d Produto do Leste", codigo); break;
		case 4: printf("%d Produto do Oeste", codigo); break;
		case 5:
		case 6: printf("%d Produto do Nordeste", codigo); break;
		default: printf("%d Produto Importado"); break;
	}

}