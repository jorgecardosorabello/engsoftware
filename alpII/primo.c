#include <stdio.h>

int main(){
	int num, i, div;
	printf("Informe um número: ");
	scanf("%d", &num);
	div = 0;

	for(i=num;i>=1;i--){
    if(num%i == 0){
			div=div+1;
		}
	}
  printf("%d \n", div);
	if(div==2){
		printf("%d é um número primo!", num);
	} else{
    printf("Não primo!");
  }
}