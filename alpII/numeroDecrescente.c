#include <stdio.h>
int main(){
	int num[30];
	int i;
	
	for(i=1; i<=30; i++){
		printf("\nDigite um número: ");
		scanf("%d", &num[i]);
  }
  for(i=30;i>=1; i--){
    printf("\n%d", num[i]);
  }
}