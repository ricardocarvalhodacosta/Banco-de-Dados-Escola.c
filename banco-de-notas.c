#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct {
	char nome[100];
	double nota;

} dados ;

typedef struct {
	char menu;
	int op;
	char sala;
} menu ;

int main (void) {
	
	FILE *classeA, *classeB, *classeC;
	dados dados;
	menu menu;
	
    printf("Qual classe voce gostaria de acessar?\n");
    printf("Classe A, Classe B ou Classe C?\n");
   	scanf("%c", &menu.menu);
   	menu.menu = toupper(menu.menu);
   	
	printf("O que você gostaria de fazer?\n");
	printf("1. Adicionar um novo Aluno;\n");
	printf("2. Verificar os dados de uma Classe;\n");
	scanf("%d", &menu.op);
	
	if (menu.op==1) {
		switch (menu.menu)
	    {
	    case 'A':
	
	        classeA = fopen ("ClasseA.txt", "w");
	        printf("Arquivo aberto com sucesso!\n");
	        printf("Adicione o nome do aluno: \n");
	        fgets(dados.nome, 100, stdin);
	        printf("Agora a nota do aluno:\n");
	        scanf("%lf", &dados.nota);
	        printf("Armazenando os dados computados...\n");
	        printf("...\n");
	        printf("..\n");
	        printf(".\n");
	        printf("Dados armazenados com sucesso!");
	        fprintf(classeA, "Nome: %s\n", dados.nome);
	        fprintf(classeA, "Nota: %lf\n\n", dados.nota);
	        fclose(classeA);
	        break;
	    
	    case 'B':
	
	        classeB = fopen ("ClasseB.txt", "w");
	        printf("Arquivo aberto com sucesso!\n");
	        printf("Adicione o nome e a nota do aluno:\n");
	        fgets(dados.nome, 100, stdin);
	        printf("Agora a nota do aluno:\n");
	        scanf("%lf", &dados.nota);
	        printf("Armazenando os dados computados...\n");
	        printf("...\n");
	        printf("..\n");
	        printf(".\n");
	        printf("Dados armazenados com sucesso!");
	        fprintf(classeB, "Nome: %s\n", dados.nome);
	        fprintf(classeB, "Nota: %lf\n\n", dados.nota);
	        fclose(classeB);
	        break;
	
	    case 'C':
	
	        classeC = fopen ("ClasseC.txt", "w");
	        printf("Arquivo aberto com sucesso!\n");
	        printf("Adicione o nome e a nota do aluno:\n");
	        fgets(dados.nome, 100, stdin);
	        printf("Agora a nota do aluno:\n");
	        scanf("%lf", &dados.nota);
	        printf("Armazenando os dados computados...\n");
	        printf("...\n");
	        printf("..\n");
	        printf(".\n");
	        printf("Dados armazenados com sucesso!");
	        fprintf(classeC, "Nome: %s\n", dados.nome);
	        fprintf(classeC, "Nota: %lf\n\n", dados.nota);
	        fclose(classeC);
	        break;
	
	    default:
	        break;
	    }
	} else {

		printf("Qual classe você gostaria de acessar?\n");
		scanf("%c", &menu.sala);
		
		switch (menu.sala)
		{
			case 'A':
				classeA = fopen ("ClasseA.txt", "r");
				fclose(classeA);
				break;
				
			case 'B':
				classeB = fopen ("ClasseB.txt", "r");
				fclose(classeB);
				break;
				
			case 'C':
				classeC = fopen ("ClasseC.txt", "r");
				fclose(classeC);
				break;
				
			default:
				break;
		}
	}

	
	return (0);
}
