#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

//Estruturas para facilitar o armazenamento dos dados do aluno;
typedef struct {
	char nome[25];
	float nota1;
	float nota2;
} dados ;

//Estrutura para armazenamento das variaveis que são utilizadas para criar a "interface" do programa, aqui chamadas de "MENU";
typedef struct {
	char menu;
	int op;
	char sala;
	char leitura;
} menu ;


int main (void) {
	
	setlocale(LC_ALL, "portuguese-brazilian"); //Usado para deixar que a acentuação utilizada na gramática portuguesa seja lida e impressa no arquivo;
	//nomes dos arquivos por classe, dando a opção de 3 classes (A, B e C);
	FILE *classeA, *classeB, *classeC;
	dados dados;
	menu menu;
	float media = 0;
	
	
	//Mensagem de apresentação do Programa;
	printf(".________________________________________.\n");
	printf("|                                        |\n");
	printf("|      Olá, eu sou o banco de dados      |\n");
	printf("|        e estou aqui para ajudar!       |\n");
	printf("|       Antes de começarmos, me diga:    |\n");
    printf("|  Qual classe voce gostaria de acessar? |\n");
    printf("|     Classe A, Classe B ou Classe C?    |\n");
    printf("|  Por favor, digite a letra da Classe:  |\n");
    printf("|________________________________________|\n");
   	scanf("%c", &menu.menu); //Armazena a opção da Classe escolhida;
   	menu.menu = toupper(menu.menu); //Transforma a letra digitada em MAIUSCULO;
   	
   	printf(".__________________________________________.\n");
   	printf("|                                          |\n");
   	printf("|     Ótimo, agora me diga, o que iremos   |\n");
   	printf("|                fazer hoje?               |\n");
	printf("|                                          |\n");
	printf("|      1. Adicionar um novo Aluno;         |\n");
	printf("|  2. Verificar os dados de uma Classe;    |\n");
	printf("|                                          |\n");
	printf("|     Por favor, digite o número da        |\n");
	printf("|                 opção:                   |\n");
	printf("|__________________________________________|\n");
	scanf("%d", &menu.op); //Armazena a opção de adicionar ou verificar para o IF e o ELSE;
	
	//SE a opção escolhida acima for 1, ele roda o switch para adicionar o aluno a classe escolhida lá em cima;
	if (menu.op==1) {
		switch (menu.menu)
	    {
	    case 'A':
	
	        classeA = fopen ("ClasseA.txt", "a"); //Abre o arquivo TXT para modificação;
	        printf(".___________________________________.\n");
	        printf("|                                   |\n");
	        printf("|    Arquivo aberto com sucesso!    |\n");
	        printf("|     Adicione o nome do aluno:     |\n");
	        printf("|___________________________________|\n");
	        getchar(); //Limpa o buffer para armazenamento do nome;
	        fflush(stdin);
	        fgets(dados.nome, 25, stdin);
	        printf("\n.________________________________________.\n");
	        printf("|                                        |\n");
	        printf("|   Agora a nota do da primeira prova:   |\n");
	        printf("|________________________________________|\n");
	        scanf("%f", &dados.nota1);
	        printf("\n.________________________________________.\n");
	        printf("|                                        |\n");
	        printf("|   Agora a nota do da segunda prova:    |\n");
	        printf("|________________________________________|\n");
	        scanf("%f", &dados.nota2);
	        media = (dados.nota1+dados.nota2) / 2; //Calcula e armazena a média do aluno dividindo as notas digitadas na primeira prova e segunda prova;
	        printf("\n.________________________________________.\n");
	        printf("|                                          |\n");
	        printf("|       Calculando a média do aluno...     |\n");
	        printf("|       Média calculada!                   |\n");
	        printf("|       A média deste aluno é: %.1f         |\n", media);
	        printf("|__________________________________________|\n");
	        printf("\n.________________________________________.\n");
	        printf("|     Armazenando os dados computados...   |\n");
	        printf("|     ...                                  |\n");
	        printf("|     ..                                   |\n");
	        printf("|     .                                    |\n");
	        printf("|     Dados armazenados com sucesso!       |\n");
	        printf("|     Obrigado e volte logo!               |\n");
	        printf("|__________________________________________|\n\n");
	        fprintf(classeA, "Nome: %s", dados.nome); //Adiciona no arquivo TXT as informações do aluno (nome, notas e a média);
	        fprintf(classeA, "Nota da primeira prova: %.1f\n", dados.nota1);
	        fprintf(classeA, "Nota da segunda prova: %.1f\n", dados.nota2);
	        fprintf(classeA, "Média do aluno: %.1f\n\n", media);
	        fclose(classeA);
	        break;
	    
	    case 'B':
	
	        classeB = fopen ("ClasseB.txt", "a");
	       	printf(".___________________________________.\n");
	        printf("|                                   |\n");
	        printf("|    Arquivo aberto com sucesso!    |\n");
	        printf("|     Adicione o nome do aluno:     |\n");
	        printf("|___________________________________|\n");
	        getchar();
	        fflush(stdin);
	        fgets(dados.nome, 25, stdin);
	        printf("\n.________________________________________.\n");
	        printf("|                                        |\n");
	        printf("|   Agora a nota do da primeira prova:   |\n");
	        printf("|________________________________________|\n");
	        scanf("%f", &dados.nota1);
	        printf("\n.________________________________________.\n");
	        printf("|                                        |\n");
	        printf("|   Agora a nota do da segunda prova:    |\n");
	        printf("|________________________________________|\n");
	        scanf("%f", &dados.nota2);
	        media = (dados.nota1+dados.nota2) / 2;
	        printf("\n.________________________________________.\n");
	        printf("|                                          |\n");
	        printf("|       Calculando a média do aluno...     |\n");
	        printf("|       Média calculada!                   |\n");
	        printf("|       A média deste aluno é: %.1f         |\n", media);
	        printf("|__________________________________________|\n");
	        printf("\n.________________________________________.\n");
	        printf("|     Armazenando os dados computados...   |\n");
	        printf("|     ...                                  |\n");
	        printf("|     ..                                   |\n");
	        printf("|     .                                    |\n");
	        printf("|     Dados armazenados com sucesso!       |\n");
	        printf("|     Obrigado e volte logo!               |\n");
	        printf("|__________________________________________|\n\n");
	        fprintf(classeB, "Nome: %s", dados.nome);
	        fprintf(classeB, "Nota da primeira prova: %.1f\n", dados.nota1);
	        fprintf(classeB, "Nota da segunda prova: %.1f\n", dados.nota2);
	        fprintf(classeB, "Média do aluno: %.1f\n\n", media);
	        fclose(classeB);
	        break;
	
	    case 'C':
	
	        classeC = fopen ("ClasseC.txt", "a");
	        printf(".___________________________________.\n");
	        printf("|                                   |\n");
	        printf("|    Arquivo aberto com sucesso!    |\n");
	        printf("|     Adicione o nome do aluno:     |\n");
	        printf("|___________________________________|\n");
	        getchar();
	        fflush(stdin);
	        fgets(dados.nome, 25, stdin);
	        printf("\n.________________________________________.\n");
	        printf("|                                        |\n");
	        printf("|   Agora a nota do da primeira prova:   |\n");
	        printf("|________________________________________|\n");
	        scanf("%f", &dados.nota1);
	        printf("\n.________________________________________.\n");
	        printf("|                                        |\n");
	        printf("|   Agora a nota do da segunda prova:    |\n");
	        printf("|________________________________________|\n");
	        scanf("%f", &dados.nota2);
	        media = (dados.nota1+dados.nota2) / 2;
	        printf("\n.________________________________________.\n");
	        printf("|                                          |\n");
	        printf("|       Calculando a média do aluno...     |\n");
	        printf("|       Média calculada!                   |\n");
	        printf("|       A média deste aluno é: %.1f         |\n", media);
	        printf("|__________________________________________|\n");
	        printf("\n.________________________________________.\n");
	        printf("|     Armazenando os dados computados...   |\n");
	        printf("|     ...                                  |\n");
	        printf("|     ..                                   |\n");
	        printf("|     .                                    |\n");
	        printf("|     Dados armazenados com sucesso!       |\n");
	        printf("|     Obrigado e volte logo!               |\n");
	        printf("|__________________________________________|\n\n");
	        fprintf(classeC, "Nome: %s", dados.nome);
	        fprintf(classeC, "Nota da primeira prova: %.1f\n", dados.nota1);
	        fprintf(classeC, "Nota da segunda prova: %.1f\n", dados.nota2);
	        fprintf(classeC, "Média do aluno: %.1f\n\n", media);
	        fclose(classeC);
	        break;
	
	    default:
	        break;
	    }
	} else { //Se a opção digitada no menu for 2, vem para cá para a leitura do arquivo TXT da classe escolhida no inicio;
		
		switch (menu.menu)
		{
			case 'A':
				classeA = fopen ("ClasseA.txt", "r"); //"r" para apenas leitura do arquivo;
				do //Enquanto ele faz a leitura de caractere por caractere ele imprime na tela os dados existentes no arquivo TXT;
	            {
	                menu.leitura = fgetc(classeA);
	                printf("%c", menu.leitura);
	
	            } while (menu.leitura != EOF);
				fclose(classeA);
				break;
				
			case 'B':
				classeB = fopen ("ClasseB.txt", "r");
				do
	            {
	                menu.leitura = fgetc(classeB);
	                printf("%c", menu.leitura);
	
	            } while (menu.leitura != EOF);
				fclose(classeB);
				break;
				
			case 'C':
				classeC = fopen ("ClasseC.txt", "r");
				do
	            {
	                menu.leitura = fgetc(classeC);
	                printf("%c", menu.leitura);
	
	            } while (menu.leitura != EOF);
				fclose(classeC);
				break;
				
			default:
				break;
		}
	}

	system("PAUSE");
	return (0);
}
