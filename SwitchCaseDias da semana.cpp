#include<stdio.h>
#include<stdlib.h>//bibli do system pause
#include<conio.h>

int main(){
	
	int valor;
	
	printf("Entre com o dia da semana em numeral.\n");
	scanf("%d", &valor);
	
	switch(valor){
		case 1:
			printf("Domingo.\n");
			break;//termina a execução e segue para a próxima. Assim evita os próximos testes.
		case 2:
			printf("Segunda.\n");
			break;
		case 3:
			printf("Terca.\n");
			break;
		case 4:
			printf("Quarta.\n");
			break;
		case 5:
			printf("Sexta.\n");
			break;
		case 6:
			printf("Sabado.\n");
			break;
			default:// exibe uma mensagem, caso nenhuma das alternativas anteriores seja verdadeira.
				printf("Valor invalido.\n");
	}
	getch();
	
	system("pause");
	
}

