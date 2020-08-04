#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
    int anoNascimento, anoAtual, idade;



	printf("Digite o ano de Nascimento: ");
	scanf("%d", &anoNascimento);
	printf("\nDigite o ano atual: ");
	scanf("%d", &anoAtual);

	idade = anoAtual - anoNascimento;

    if(idade >= 16){
        if(idade >= 16 && idade < 18){
            printf("\nCom %d anos você pode votar!", idade);
        }else{
            printf("\nCom %d anos você pode votar e fazer a carteira de habilitação!", idade);
        }
    }else{
        printf("\nCom %d anos você não pode para votar nem dirigir.", idade);
    }
}