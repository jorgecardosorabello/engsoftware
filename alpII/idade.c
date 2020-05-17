#include <stdio.h>

int main() {
  int anoDesejado, anoDeNascimento, idade;

	printf("Digite o ano de nascimento: ");
	scanf("%d", &anoDeNascimento);
	printf("Agora informe em que ano você deseja saber: ");
	scanf("%d", &anoDesejado);

	idade = anoDesejado - anoDeNascimento;

	printf("Nascidos no ano %d terão %d anos de idade em %d.", anoDeNascimento, idade, anoDesejado);
  
  return (0);
}