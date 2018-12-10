#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char url[] = "C:\\Users\\Leandro\\Desktop\\C\\AgendaMelhorada.txt";
	FILE *arq = fopen(url,"w");
	
	FILE *arq2 = fopen(url,"r");//para ler o arquivo na tela "r"
	char linha[300];
	
	struct cliente{
	char nome[30], email[30];
	int numero;	
	};
	int acao;
	
	struct cliente cli[2];
	
	if(arq==NULL){
				printf("Erro ao acessar o arquivo.");
	}else{
		while(acao!=0){
			printf("O que deseja fazer?\n");
			printf("Para CADASTRAR(1) - IMPRIMIR(2) - CONSULTAR(3) - SAIR(0)\n");
			scanf("%d",&acao);
			switch(acao){
				case 0:
					break;
				case 1: 
					for(int i = 0; i<2; i++){
					printf("Digite o nome do contato %d: \n",i+1);
					scanf("%s",&cli[i].nome);
					printf("Digite o email do contato %d: \n",i+1);
					scanf("%s",&cli[i].email);
					printf("Digite o numero do contato %d: \n",i+1);
					scanf("%d",&cli[i].numero);
					}
					printf("Cadastro feito com sucesso.\n");		
				break;
			case 2:
				for(int i = 0; i<2;i++){
					fprintf(arq,"nome: %s\nemail: %s\ntelefone: %d\n",cli[i].nome,cli[i].email,cli[i].numero);	
				}
				printf("Arquivo gerado com sucesso!\n");
				fclose(arq);
				break;	
			case 3:
				while(0==0){
					fgets(linha,300, arq2);//pega do arquivo fgets(variavel, tamano da variavel, local do arquivo);
					if(feof(arq2)){  // feof(caminho do arquivo) - end of file...final do arquivo.
						break;
					}
					puts(linha);// puts imprime no console o que foi recebido por fgets;
				}
				fclose(arq2);
				printf("\n");
				break;
			}
		}
	}
	return 0;
}
