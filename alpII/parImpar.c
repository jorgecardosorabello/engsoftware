#include <stdio.h>
#include <math.h>


int main() {
    
    int num;
    float raiz, quadrado;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    if(num % 2 == 0) {
        raiz = sqrt(num);
        printf("\n%f", raiz);
    }
    
    else {
        quadrado = pow(num,2);
        printf("\n%f", quadrado);
    }
    
    return(0);
    
}