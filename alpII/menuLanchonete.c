#include <stdio.h>

int main() {
  
  int escolha;
  float valor;

  valor = 0;
  
  printf("Escolha uma opção do nosso menu: ");
  printf("\n1 - X-Bacon\n2 - X-Salada");
  printf("\nInforme o número do seu prato desejado: ");
  scanf("%d", &escolha);
  
  switch(escolha)
  {
    case 1:
      valor += 18,00;
      printf("\nX-Bacon - Preço: R$ %.2f", valor);
      break;
    case 2:
      valor += 15,00;
      printf("\nX-Salada - Preço: R$ %.2f", valor);
      break;
    default:
      printf("\nPor favor escolha um lanche válido.");
  }  
  
  return(0);
}