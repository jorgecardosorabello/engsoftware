#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#define MAX 5

struct cadastro
    {
        int codigo;
        char nomeProduto[20];
        float preco;
    };
int main()
{
    setlocale(LC_ALL,"");
    struct cadastro mercadorias[MAX];
    int i, j, codigo, opcao;
    int cont=0;
    char resp = 's';
    
    do
    {
        printf("\nEscolha uma opção: ");
        printf("\n1 - Cadastrar novo produto");
        printf("\n2 - Listar produtos");
        printf("\n3 - Consultar produto por código");
        printf("\n4 - Sair\n");
        scanf("%d", &opcao);
        switch(opcao)
        {
            case 1:
                printf("\nCADASTRAR PRODUTOS");
                while((resp == 's'|| resp == 'S') && (cont < MAX)){
                    system("cls");
                    printf("\nInforme o código do produto: ");
                    fpurge(stdin);
                    scanf("%d", &mercadorias[cont].codigo);
                   
                    printf("\nInforme o nome do produto: ");
                    fpurge(stdin);
                    gets(mercadorias[cont].nomeProduto);
                    
                    printf("\nInforme o preço do produto: ");
                    fpurge(stdin);
                    scanf("%f", &mercadorias[cont].preco);
                    
                    printf("\nDeseja cadastrar novo registro [s][n]: ");
                    fpurge(stdin);
                    scanf("%c", &resp);
                    if((resp == 's') || (resp == 'S')){
                      cont++;
                    };
                }
                break;
            case 2:
                system("cls");
                printf("\nLISTAGEM DOS PRODUTOS");
                printf("\nCÓDIGO    -   NOME    -   PREÇO");
                for(i=0;i<=cont;i++){
                    printf("\n%d - %s - %f ", mercadorias[i].codigo, mercadorias[i].nomeProduto, mercadorias[i].preco);
                }
                break;
            case 3:
                system("cls");
                printf("\nCONSULTAR PRODUTOS POR CÓDIGO");
                printf("Informe o código a ser consultado: ");
                fpurge(stdin);
                scanf("%d", &codigo);
                for(j=0;j<=cont;j++)
                {
                    if(codigo == mercadorias[j].codigo){
                        printf("\n%d - %s - %f", mercadorias[j].codigo, mercadorias[j].nomeProduto, mercadorias[j].preco);
                    }
                }
                break;
            default:
                printf("\nEscolha uma opção válida!");
                break;
        }
        }while(opcao==4);
}