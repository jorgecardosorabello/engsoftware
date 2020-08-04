#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");

float precoNormal, precoFinal;
int condicaoPagamento;

	printf("Preço de etiqueta: ");
	scanf("%f", &precoNormal);
	printf("\nCondição de Pagamento: ");
	scanf("%d", &condicaoPagamento);


	switch(condicaoPagamento){
		case 1:
			precoFinal = precoNormal - precoNormal * 10/100;
			printf("\nPreço a pagar: R$ %.2f", precoFinal);
			break;
		case 2:
			precoFinal = precoNormal - precoNormal * 5/100;
			printf("\nPreço a pagar: R$ %.2f", precoFinal);
			break;
		case 3:
			printf("\nPreço a pagar: R$ %.2f", precoNormal);
			break;
		case 4:
			precoFinal = precoNormal + precoNormal * 10/100;
			printf("\nPreço a pagar: R$ %.2f", precoFinal);
			break;

		default:
 		    printf("\nEscolha uma opção válida!");
            break;
	}
}