#include <stdio.h>

int main(){

	int par, impar, num;
	par = 0;
	impar = 0;

	printf("Informe um  número: ");
	scanf("%d", &num);

	while(num != 0){
		if(num % 2 == 0){
			par++;
		}else{
			impar++;
		}
		printf("\nInforme um  número: ");
		scanf("%d", &num);
	}
	printf("\nForam informados %d números pares e %d números ímpares!", par, impar);

}