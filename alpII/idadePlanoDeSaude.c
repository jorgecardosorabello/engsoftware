#include <stdio.h>

int main()
{
    
  int idade;
  char nome[30];
  
  printf("Informe o nome: ");
  scanf("%s", nome);
  printf("\nInforme a idade: ");
  scanf("%d", &idade);
  
  printf("\n%s", nome);
  if (idade <= 18){
    printf("\nA mensalidade do seu plano custa R$ 50,00.");
  }
  else
  {
    if (idade >= 19 && idade <= 29) {
    printf("\nA mensalidade do seu plano custa R$ 70,00.");
    }
    else
    {
      if (idade >= 30 && idade <= 45) {
        printf("\nA mensalidade do seu plano custa R$ 90,00.");
      }
      else
      {
        if (idade >= 46 && idade <= 65) {
          printf("\nA mensalidade do seu plano custa R$ 130,00.");
        }
        else
        {
          printf("\nA mensalidade do seu plano custa R$ 170,00.");
        }
      }
    }  
  } 
  return(0);
}