#include <stdio.h>

int main(void) {

	int num, i, resultado;

	printf("Digite um número: ");
	scanf("%d", &num);

	for (i=1;i<=10;i++){
	  resultado = num * i;
		printf("\n%d x %d = %d", num, i, resultado);
  }
	
  return 0;
}