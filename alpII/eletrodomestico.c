#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#define MAX 3
struct Pessoa{
    int codigo;
    char nome[30];
    float debito[12];
};

    struct cadastro{
    char nome[20];
    char telefone[10];
    char nomeProduto[10];
    float preco;
    };

    int main(){
        setlocale(LC_ALL,"");
        
        struct cadastro eletrodomestico[MAX];
        int i, cont=0;
        float media, total;
        total=0;
        char resp = 's';

        while((resp == 's'|| resp == 'S') && (cont < MAX)){
            system("cls");

            printf("\nInforme o nome da loja: ");
            fflush(stdin);
            gets(eletrodomestico[cont].nome);
            
            printf("\nInforme o telefone da loja: ");
            fflush(stdin);
            gets(eletrodomestico[cont].telefone);
            
            printf("\nInforme o nome do produto: ");
            fflush(stdin);
            gets(eletrodomestico[cont].nomeProduto);
            
            printf("\nInforme o preço do produto: ");
            fflush(stdin);
            scanf("%f", &eletrodomestico[cont].preco);
            
            total=total+eletrodomestico[cont].preco;
            
            printf("\nDeseja cadastrar novo registro [s][n]: ");
            fflush(stdin);
            scanf("%c", &resp);
            if((resp == 's') || (resp == 'S')){
              cont++;
            };
        }
        media=total/cont;
        system("cls");

        printf("\nEletrodomestico é encontrado abixo da média nas seguintes lojas:\n");
          for(i=0;i<MAX;i++){
              if(eletrodomestico[i].preco < media){
                  printf("\n  Nome da loja - Telefone\n");
                  printf("%s - %s", eletrodomestico[i].nome, eletrodomestico[i].telefone);
              }
          }
        printf("\n\n");
        system("Pause");
        return 0;
    }
