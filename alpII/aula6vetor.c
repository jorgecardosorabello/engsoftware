...
for(i=0;i<3;i++){
    system("cls");
    printf("Informe o código: \n");
    fflush(stdin);
    scanf("%d",cadPessoa[i].codigo);
    printf("Informe o nome: \n");
    fflush(stdin);
    gets(cadPessoa[i].nome);
}
...
for(i=0;i<3;i++){
  printf("\n  %d  - %d  ", cadPessoa.codigo);
	printf(" - %s", cadPessoa.nome);
}