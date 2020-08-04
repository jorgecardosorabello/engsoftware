#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// declaração da struct pessoa

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int op;
	do{
		printf("\n1 - Opção 1");
		printf("\n2 - Opção 2");
		printf("\n3 - Opção 3");
		printf("\n4 - Opção 4");
		printf("\n0 - Sair");
		printf("\nEscolha Opção: ");
		scanf("%d", &op);
		switch(op)
		{
			case 1:
				printf("Intruções opção 1");
				break;
			case 2:
				printf("Intruções opção 2");
				printf("\n");
				system("pause");
				break;
			case 3: 		
				printf("Intruções opção 3");;
				fflush(stdin);
				printf("\n");
				system("pause");
				break;
			case 4: 
				printf("Intruções opção 4");
				printf("\n");
				system("pause");
				break;
			case 0:
				printf("\nSaindo do sistema!!!");
				break;
			default:
				printf("Valor indefinido");
				system("pause");
				break;
		}	
	}while(op!=0);
	return 0;
}