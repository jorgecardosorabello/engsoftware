#include<stdio.h>
#include<math.h>
    
int main(){
    int num;
    
    printf("Vamos descobrir se seu seu número é divisível por 5!");
    printf("\nDigite um número: ");
    scanf("%d", &num);
    
    if (num % 5 == 0) {
        printf("\n%d é divisível por 5.", num);
    } else {
        printf("%d NÃO é divisível por 5.", num);
    }
      
    return (0);
      
}