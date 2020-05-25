#include<stdio.h>
    
int main()
{
    int num;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    switch(num){
        case 1:
            printf("UM");
            break;
        case 5:
            printf("CINCO");
            break;
        case 10:
            printf("DEZ");
            break;
        default:
            printf("Número inválido.");
            break;
    }
}
