#include <stdio.h>

int main() {
    
    int idade;

	printf("Digite a idade: ");
	scanf("%d", &idade);


	if(idade < 18)
	{
		printf("Menor de idade.");
	}
	else
	{
		if(idade > 64) {
			printf("Idoso.");
		}else{
			printf("Maior de idade.");
		}
	}
    return(0);
}