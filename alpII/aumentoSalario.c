#include <stdio.h>

int main(){

	float salarioBase, valorAumento, novoSalario;
	int codigoCargo;

	printf("Informe o salário: ");
	scanf("%f", &salarioBase);
	printf("\nInforme o código do cargo: ");
	scanf("%d", &codigoCargo);

	if(codigoCargo == 0 || codigoCargo >= 5){
    printf("\nCódigo inválido. Informe um código válido!");
  }else{
    if(codigoCargo == 1){
      valorAumento = salarioBase * (50/100);
      novoSalario = salarioBase + valorAumento;
      printf("\nServiços Gerais, aumento de: R$ %.2f, novo salário: R$ %.2f", valorAumento, novoSalario);
    }else{
      if(codigoCargo == 2){
        valorAumento = salarioBase * (30/100);
        novoSalario = salarioBase + valorAumento;
        printf("\nVigia, aumento de: R$ %.2f, novo salário: R$ %.2f", valorAumento, novoSalario);
      }else{
        if(codigoCargo == 3){
          valorAumento = salarioBase * (25/100);
          novoSalario = salarioBase + valorAumento;
          printf("\nRecepcionista, aumento de: R$ %.2f, novo salário: R$ %.2f", valorAumento, novoSalario);
        }else{
          valorAumento = salarioBase * (15/100);
          novoSalario = salarioBase + valorAumento;
          printf("\nVendedor, aumento de: R$ %.2f, novo salário: R$ %.2f", valorAumento, novoSalario);
        }
      }
    }
  }
}