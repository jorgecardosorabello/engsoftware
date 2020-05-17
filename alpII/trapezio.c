#include <stdio.h>
#include <math.h>

int main() {
    
    float baseMaior, baseMenor, altura, area;
    
    printf("Vamos calcular a área do trapézio.");
    printf("\nDigite a base maior: ");
    scanf("%f", &baseMaior);
    printf("\nDigite a base menor: ");
    scanf("%f", &baseMenor);
    printf("\nDigite a altura: ");
    scanf("%f", &altura);
    
    area = ((baseMaior + baseMenor) * altura) / 2;
    
    printf("\nA área do trapézio é %f", area);
    
    return(0);
    
}