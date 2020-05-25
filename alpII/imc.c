#include <stdio.h>

int main(){
   
  float peso, altura, imc;
  
  printf("Digite o peso: ");
  scanf("%f", &peso);
  printf("\nDigite o altura em metros: ");
  scanf("%f", &altura);

	imc = peso / (altura * altura);
  printf("\nPeso: %.2f", peso);	
  printf("\nAltura: %.2f", altura);
  printf("\nIMC: %.2f", imc);
 
	if(imc < 25){
	  if(imc < 17){
	    printf("\nMuito abaixo do peso.");
	  }else{
	    if(imc <= 18.49){
	      printf("\nAbaixo do peso.");
	    }else{
	      printf("\nPeso normal.");
	    }
	  }
	}else{
	  if(imc <= 29.99){
	    printf("\nAcima do peso.");
	  }else{
	    if(imc <= 34.99){
			  printf("\nObesidade I.");
	    }else{
			  if(imc < 40){
				  printf("\nObesidade II (severa).");
			  }else{
				  printf("\nObesidade III (mórbida).");
			  }
	    }
	  }
	}
}