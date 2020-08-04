#include <stdio.h>

int main(){
	int nPedido, quant;
	float preco, total;

	total = 0;	

  printf("\nNúmero do pedido: ");
	scanf("%d", &nPedido);
	
  while(nPedido != 0)
  {

		printf("\nPreço unitário: ");
		scanf("%f", &preco);
		printf("\nQuantidade: ");
		scanf("%d", &quant);
		
		printf("\nValor do pedido: R$ %.2f", preco * quant);
		
		total = total + (preco * quant);
   
    printf("\nSe houver mais um pedido, digite o número, caso contrário digite 0: ");
		scanf("%d", &nPedido);
		
	}

  printf("\n----------------------");
  printf("\nValor total da compra: R$ %.2f", total);
  printf("\n----------------------");
  
  return 0;
}