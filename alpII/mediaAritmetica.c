#include <stdio.h>

int main() {

  float media1, media2, media3, media4, mediaAritmetica;

  printf("Informe a primeira média: ");
  scanf("%f", &media1);
  printf("Informe a segunda média: ");
  scanf("%f", &media2);
  printf("Informe a terceira média: ");
  scanf("%f", &media3);
  printf("Informe a quarta média: ");
  scanf("%f", &media4);
  
  mediaAritmetica = (media1 + media2 + media3 + media4) / 4;
 

  printf("\nA média aritmética é: %f", mediaAritmetica);


  return (0);
  
}
