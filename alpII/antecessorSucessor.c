#include <stdio.h>

int main() {

  int num, antecessor, sucessor;

  printf("Informe um número: ");
  scanf("%d", &num);
  
  antecessor = num - 1;
  sucessor = num + 1;

  printf("\nO antecessor é: %d", antecessor);
  printf("\nO sucessor é: %d", sucessor);

  return (0);
  
}
