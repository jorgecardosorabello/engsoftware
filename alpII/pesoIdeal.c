#include <stdio.h>

int main() {
    
    float altura, pesoIdeal;
    char sexo;
    
    
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("\nInforme o sexo (M/F): ");
    scanf("%c", &sexo);
    
    
    if (sexo == 'M' || sexo == 'm') {
        pesoIdeal = (72.7 * altura) - 58;
        printf("\nSeu peso ideal é: %.2f Kg.", pesoIdeal);
    }
    else {
        pesoIdeal = (62.1 * altura) - 44.7;
        printf("\nSeu peso ideal é: %.2f Kg.", pesoIdeal);
    }
    
    return(0);
}