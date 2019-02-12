#include<stdio.h>
#include<stdlib.h>//bibli do system pause
#include<conio.h>

int main(){
	
	int valor;
	
	printf("Entre com o dia da semana em numeral.\n");
	scanf("%d", &valor);
	
	switch(valor){ //variável ou valor que será comparado.
		case 1:// se valor igual a 1... esse trexo será executado
			printf("Domingo.\n vai curtir.\n");
			break;//termina a execução e segue para a próxima. Assim evita os próximos testes.
		case 2:
			printf("Segunda.\nDia de voltar a trabalhar.\n");
			break;
		case 3:
			printf("Terca.\n");
			break;
		case 4:
			printf("Quarta.\n");
			break;
		case 5:
			printf("Sexta.\nOpa!!! Quase!\n");
			break;
		case 6:
			printf("Sabado.\nAeeee!!!\n");
			break;
			default:// exibe uma mensagem, caso nenhuma das alternativas anteriores seja verdadeira.
				printf("Valor invalido.\n");
	}
	getch();
	
	system("pause");
	
}

