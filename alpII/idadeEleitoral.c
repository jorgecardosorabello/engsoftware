#include <stdio.h>

int main() {
  
  int idade;
  
  printf("Digite sua idade: ");
  scanf("%d", &idade);
  
  if (idade < 16) {
      printf("\nVocê tem %d e é considerado NÃO ELEITOR.", idade);
  }
  else
  {
      if (idade < 18 || idade > 65) {
          printf("\nVocê tem %d, portanto é ELEITOR FACULTATIVO.", idade);
      }
      else
      {
          printf("\nVocê tem %d, portanto é ELEITOR OBRIGATÓRIO.", idade);
      }
  }
  
  return(0);
}