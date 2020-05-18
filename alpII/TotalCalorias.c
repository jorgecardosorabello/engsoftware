#include <stdio.h>

int main() {
  
  int escolha;
  float calorias;
  
  calorias = 0;
  printf("Informativo de calorias. Opções de pratos:");
  printf("\n1 - Italiano , 2 - Japonês, 3 - Salvadorenho");
  printf("\nInforme o número do seu prato desejado: \n");
  scanf("%d", &escolha);
  
  switch(escolha)
  {
    case 1:
      calorias += 750;
      break;
    case 2:
      calorias += 324;
      break;
    case 3:
      calorias += 545;
      break;
  }
  
  printf("\nEscolha a sua bebida: ");
  printf("\n1 - Chá, 2 - Suco de Laranja, 3 - Refrigerante\n");
  scanf("%d", &escolha);
  
  switch(escolha)
  {
    case 1:
      calorias += 30;
      break;
    case 2:
      calorias += 80;
      break;
    case 3:
      calorias += 90;
      break;
  }
  
  printf("\nSerão %.2f cal.\nBom apetite!", calorias);
  
  
  return(0);
}