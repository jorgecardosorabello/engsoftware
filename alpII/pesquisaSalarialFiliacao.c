#include <stdio.h>

int main(){

  float salario, somaSalario, maiorSalario, mediaNumeroFilhos, salarioMenorQue100, mediaSalarial;
  int numeroFilhos, i, j, somaFilhos;

  printf("\nSalário: ");
  scanf("%f", &salario);    
  printf("Número de filhos: ");
  scanf("%d", &numeroFilhos);

  somaSalario = 0;
  maiorSalario = 0;
  i = 0;
  j = 0;
  mediaSalarial = 0;
  mediaNumeroFilhos = 0;
  somaFilhos = 0;
  salarioMenorQue100 = ((j/i) * 100);

  while(salario > 0){
    if(salario < 100){
      j = j + 1;
    }
   
    i = i + 1;

    somaSalario = somaSalario + salario;
    somaFilhos = somaFilhos + numeroFilhos;
    
    mediaSalarial = (somaSalario / i);
    mediaNumeroFilhos = (somaFilhos / i);

    if(maiorSalario < salario){
      maiorSalario = salario;
    }

    printf("\nSalário: ");
    scanf("%f", &salario);
    printf("\nNúmero de filhos: ");
    scanf("%d", &numeroFilhos);

  }

  printf("\n%d", i);
  printf("\n%d", j);
  printf("\n%.2f", somaSalario);
  printf("\n%d", somaFilhos);

  printf("\nMédia número de filhos: %.2f", mediaNumeroFilhos);
  printf("\nSalários abaixo de R$ 100,00: %.2f", salarioMenorQue100);
  printf("\nMédia salarial: %.2f", mediaSalarial);
  printf("\nO maior salário é: %.2f", maiorSalario);

  return 0;
}