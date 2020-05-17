#include <stdio.h>
#include <math.h>

int main() {
    
    int base, expoente, potencia;
    
    printf("Calculo de exponenciação, você precisa escolher dois números.");
    printf("\nPrimeiro escolha a base da exponenciação: ");
    scanf("%d", &base);
    printf("\nDigite  número inteiro para ser o Expoente: ");
    scanf("%d", &expoente);
    
    potencia = pow(base,expoente);
    
    printf("\n%d elevado a potência %d é igual a %d.", base, expoente, potencia);
    
    return (0);
}