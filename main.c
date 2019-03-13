#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char url[] = "C:\\Users\\Aluno 10\\Desktop\\Leandro\\Texto.txt";
	
	float nota, media = 0;
	
	FILE *arq = fopen(url,"w");// fopen para abrir arquivo e "w" para escrever no arquivo.
	
	if(arq==NULL){
		printf("Erro ao acessar o arquivo.");
	}else{
		printf("Digite a nota de portugues:\n");
		scanf("%f",&nota);
		
		fprintf(arq,"Nota de portugues: %3.1f.\n",nota);// fprintf - e para printar arquivo.
		media += nota;
		
		printf("Digite a nota de matematica:\n");
		scanf("%f",&nota);
		
		fprintf(arq,"Nota de matematica: %3.1f.\n",nota);
		media += nota;
		
			printf("Digite a nota de historia:\n");
		scanf("%f",&nota);
		
		fprintf(arq,"Nota de historia: %3.1f.\n",nota);
		media += nota;
		
		media /= 3;
		
		fprintf(arq,"A media geral foi: %3.1f.\n",media);		
	}
	
	fclose(arq);// para fechar o arquivo.
	
	return 0;
}
