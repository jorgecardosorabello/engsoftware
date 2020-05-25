#include <stdio.h>

int main(){
    int num1, num2, num3;
    
    printf("Digite 3 numeros: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    
    if(num1 > num2){
        if(num1 > num3){
            printf("\nNúmero %d é o maior.", num1);
        }
    } else{
        if(num2 > num3){
            printf("\nNúmero %d é o maior.", num2);
        }else{
            printf("\nNúmero %d é o maior.", num3);
        }
    }
}

