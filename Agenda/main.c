#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char url[] = "C:\\Users\\Aluno 10\\Desktop\\Leandro\\Impressao C\\Agenda.txt";
	
	struct cliente{
	char nome[30], email[30];
	int numero;	
	};
	
	struct cliente cli[2];
	
	FILE *arq = fopen(url,"w");
	
	if(arq==NULL){
		printf("Erro ao acessar o arquivo.");
	}else{
		for(int i = 0; i<2; i++){
			printf("Digite o nome do contato %d: \n",i+1);
			scanf("%s",&cli[i].nome);
			printf("Digite o email do contato %d: \n",i+1);
			scanf("%s",&cli[i].email);
			printf("Digite o numero do contato %d: \n",i+1);
			scanf("%d",&cli[i].numero);
		}
		
		for(int i = 0; i<2;i++){
			fprintf(arq,"nome: %s\nemail: %s\ntelefone: %d\n",cli[i].nome,cli[i].email,cli[i].numero);	
		}
		printf("Arquivo gerado com sucesso!\n");
	}
	
	fclose(arq);
	
	FILE *arq2 = fopen(url,"r");//para ler o arquivo na tela "r"
	char linha[300];
	
	while(0==0){
		fgets(linha,300, arq2);//pega do arquivo fgets(variavel, tamano da variavel, local do arquivo);
		if(feof(arq2)){  // feof(caminho do arquivo) - end of file...final do arquivo.
			break;
		}
		puts(linha);// puts imprime no console o que foi recebido por fgets;
	}
	fclose(arq2);
	printf("\n");
	
	return 0;
}
