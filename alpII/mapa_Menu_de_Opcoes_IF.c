#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int op;
  op=0;
	while(op!=0);
  {
		printf("\n1 - Opção 1");
		printf("\n2 - Opção 2");
		printf("\n3 - Opção 3");
		printf("\n4 - Opção 4");
		printf("\n0 - Sair");
		printf("\nEscolha Opção: ");
    fflush(stdin);
		scanf("%d", &op);

    if (op == 1)
    {
      printf("Intruções opção 1");
    }else{
      if (op == 2)
      {
        printf("Intruções opção 2");
      }else{
        if (op == 3)
        {
          printf("Intruções opção 3");;
        }else{
          if (op ==4)
          {
            printf("Intruções opção 4");
          }
        }
      }
    }
	}
	return 0;
}