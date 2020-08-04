#include <stdio.h>
#include <string.h>


int main(){

int idade, i;
float peso, altura, media, homemMaisAlto, MulherMaisPesada, soma;
char nome[10];
char nomeMaisAlto[10];
char nomeMaisPesada[10];
char sexo[4];

idade = 0, i = 0;
peso = 0, altura = 0, media = 0, homemMaisAlto = 0, MulherMaisPesada = 0, soma = 0;

	printf("Informe o nome do(a) atleta ou FIM para encerrar: ");
	scanf("%s", nome);

	while(nome != "FIM")
  {
		printf("\nSexo: M ou F: ");
		scanf("%s", sexo);
		printf("\nIdade: ");
		scanf("%d", &idade);
		printf("\nPeso: ");
		scanf("%f", &peso);
		printf("\nAltura (metros): ");
		scanf("%f", &altura);


    
		if(sexo == 'F'){
			if(peso > MulherMaisPesada){
				MulherMaisPesada = peso;
				nomeMaisPesada = nome;
			}
		}else{
			if(altura>homemMaisAlto){
				homemMaisAlto = altura;
				nomeMaisAlto = nome;
			}
    }
		i = i + 1;
		soma = soma + idade;
		

		printf("\nInforme o nome do(a) atleta ou FIM para encerrar: ");
		scanf("%s", nome);
	}

  media = soma / i;

  printf("\nAtleta mais pesada: %s com %f Kg.",  nomeMaisPesada, MulherMaisPesada);
  printf("\nAtleta mais alto: %s possui %f metros de altura",  nomeMaisAlto, homemMaisAlto);

  return 0;
}