#include <stdio.h>

int main() {
    float deposito, taxa, rendimento, total;
    
    printf("Informe o valor do depósito: ");
    scanf("%f", &deposito);
    printf("\nInforme a taxa de juros: ");
    scanf("%f", &taxa);
    
    rendimento = deposito * (taxa/100);
    total = deposito + rendimento;

    printf("\nRendimento: %f", rendimento);
    printf("\nValor total: %f", total);
    
    return (0);
}