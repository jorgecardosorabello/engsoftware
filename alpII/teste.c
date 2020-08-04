...
for(i=0;i<3;i++){
  system("cls");
  printf("Informe o código: \n");
  fflush(stdin);
  scanf("%d", &cadPessoa[i].codigo);
  printf("Informe o nome: \n");
  fflush(stdin);
  gets(cadPessoa[i].nome);
  for(j=0;j<2;j++){
    printf("Informe os débitos: ");
    fflush(stdin);
    scanf("%f", &cadPessoa[i].debito[j]);
  }
}
printf("  ITEM  - CÓDIGO - NOME - DÉBITOS (R$)\n");
for(i=0;i<3;i++){
  printf("\n  %d  - %d  ", i, cadPessoa[i].codigo);
	printf(" - %s", cadPessoa[i].nome);
  for(j=0;j<2;j++){
    printf("  - %5.2f", cadPessoa[i].debito[j]);
  }
}