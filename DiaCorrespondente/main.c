#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int dia = 0, mes = 0, ano = 0;
	
	while(dia<1 || dia>31){
		printf("Digite o dia: \n");
		scanf("%d",&dia);
		if(dia<1 || dia>31){
			printf("Esse dia nao existe, digite novamente.\n");
		}
	}
	while(mes<1 || mes>12){
		printf("Digite o mes: \n");
		scanf("%d",&mes);
		if(mes<1 || mes>12){
			printf("Esse mes nao existe, digite novamente.\n");
		}
	}
	while(ano<1900 || ano>2100){
		printf("Digite o ano: \n");
		scanf("%d",&ano);	
		if(ano<1900 || ano>2100){
			printf("Esse ano nao existe, digite novamente.\n");
		}
	}
	printf("dia %d...ano %d...mes %d",dia,ano,mes);
	return 0;
}
