#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

	int i, j, tam, tam2;
	char palavra[100], palavra2[100],pr[100];
	

char chamapalavra(){


	printf("Entre com a palavra.\n");
	gets(palavra);
	tam=strlen(palavra);
	tam2=strlen(palavra);
	printf("%d",tam);
	system("cls");
	
	return tam; 
	
}

char adivinha(){
	
	printf("Entre com a letra e saia da forca.\n");
	for(i=0;i<=tam;i++){
		if(palavra[i] == '\0'){
			printf("\n");
		}else{
		printf(" _ ");
		
		return 0;
}

int main(){
	
	int retornop, ad;
	
	retornop = chamapalavra();
	ad = adivinha();
	
    
    
    
    
	
	system("pause");
	
}
