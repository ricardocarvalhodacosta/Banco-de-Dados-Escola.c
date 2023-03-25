#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

//Estruturas para facilitar o armazenamento dos dados do aluno;
typedef struct {
	char nome[25];
	float nota1;
	float nota2;
	float media;
} Dados ;

//Estrutura para armazenamento das variaveis que são utilizadas para criar a "interface" do programa, aqui chamadas de "MENU";
typedef struct {
	char menu;
	int op;
} Menu ;

int obterOpcaoClasse() {
	char opcao;

	printf(".________________________________________.\n");
	printf("|                                        |\n");
	printf("|      Olá, eu sou o banco de dados      |\n");
	printf("|        e estou aqui para ajudar!       |\n");
	printf("|       Antes de começarmos, me diga:    |\n");
	printf("|  Qual classe voce gostaria de acessar? |\n");
	printf("|     Classe A, Classe B ou Classe C?    |\n");
	printf("|  Por favor, digite a letra da Classe:  |\n");
	printf("|________________________________________|\n");
   	scanf("%c", &opcao); //Armazena a opção da Classe escolhida;
	fflush(stdin); // limpar buffer de escrita

	opcao = toupper(opcao); //Transforma a letra digitada em MAIUSCULO;

	return opcao;
}

int obterOpcaoOperacao() {
	int opcao;

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
	scanf("%d", &opcao); //Armazena a opção de adicionar ou verificar para o IF e o ELSE;

	return opcao;
}

void obterDadosTurma(char opcaoTurma, Dados *dados) {
	printf(".___________________________________.\n");
	printf("|                                   |\n");
	printf("|     Turma %c                      |\n", opcaoTurma);
	printf("|     Adicione o nome do aluno:     |\n");
	printf("|___________________________________|\n");
	getchar(); //Limpa o buffer para armazenamento do nome;
	fflush(stdin);
	fgets(dados->nome, 25, stdin);
	printf("\n.________________________________________.\n");
	printf("|                                        |\n");
	printf("|   Agora a nota do da primeira prova:   |\n");
	printf("|________________________________________|\n");
	scanf("%f", &dados->nota1);
	printf("\n.________________________________________.\n");
	printf("|                                        |\n");
	printf("|   Agora a nota do da segunda prova:    |\n");
	printf("|________________________________________|\n");
	scanf("%f", &dados->nota2);
	dados->media = (dados->nota1 + dados->nota2) / 2; //Calcula e armazena a média do aluno dividindo as notas digitadas na primeira prova e segunda prova;
	printf("\n.________________________________________.\n");
	printf("|                                          |\n");
	printf("|       Calculando a média do aluno...     |\n");
	printf("|       Média calculada!                   |\n");
	printf("|       A média deste aluno é: %.1f        |\n", dados->media);
	printf("|__________________________________________|\n");
}

void gravarDadosTurma(char opcaoTurma, Dados* dados) {
	FILE *arquivo;
	char nomeArquivo[40];

	sprintf(nomeArquivo, "Classe%c.txt", opcaoTurma);

	arquivo = fopen(nomeArquivo, "a");

	printf("\n.________________________________________.\n");
	printf("|     Armazenando os dados computados...   |\n");
	printf("|     ...                                  |\n");
	printf("|     ..                                   |\n");
	printf("|     .                                    |\n");
	printf("|     Dados armazenados com sucesso!       |\n");
	printf("|     Obrigado e volte logo!               |\n");
	printf("|__________________________________________|\n\n");

	fprintf(arquivo, "Nome: %s", dados->nome); //Adiciona no arquivo TXT as informações do aluno (nome, notas e a média);
	fprintf(arquivo, "Nota da primeira prova: %.1f\n", dados->nota1);
	fprintf(arquivo, "Nota da segunda prova: %.1f\n", dados->nota2);
	fprintf(arquivo, "Média do aluno: %.1f\n\n", dados->media);

	fclose(arquivo);
}

void operacaoAdicaoAluno(char opcaoTurma) {
	Dados dados;

	switch(opcaoTurma) {
		case 'A':
		case 'B':
		case 'C':
			obterDadosTurma(opcaoTurma, &dados);
			gravarDadosTurma(opcaoTurma, &dados);
			break;
		default:
			printf("Opção inválida.");
			break;
	}
}

void lerArquivoTurma(char opcaoTurma) {
	FILE *arquivo;
	char nomeArquivo[40];
	char leitura;

	sprintf(nomeArquivo, "Classe%c.txt", opcaoTurma);

	arquivo = fopen(nomeArquivo, "r"); //"r" para apenas leitura do arquivo;

	do //Enquanto ele faz a leitura de caractere por caractere ele imprime na tela os dados existentes no arquivo TXT;
	{
		leitura = fgetc(arquivo);
		printf("%c", leitura);

	} while (leitura != EOF);

	fclose(arquivo);
}

void operacaoVerificarClasse(char opcaoTurma) {
	switch(opcaoTurma) {
		case 'A':
		case 'B':
		case 'C':
			lerArquivoTurma(opcaoTurma);
			break;
		default:
			printf("Opção inválida.");
			break;
	}
}

void executarOperacao (Menu* menu) {
	switch(menu->op) {
		case 1: //SE a opção escolhida acima for 1, ele roda o switch para adicionar o aluno a classe escolhida lá em cima;
			operacaoAdicaoAluno(menu->menu);
			break;
		case 2: //Se a opção digitada no menu for 2, vem para cá para a leitura do arquivo TXT da classe escolhida no inicio;
			operacaoVerificarClasse(menu->menu);
			break;
		default:
			printf("Opção inválida.");
			break;
	}
}

int main (void) {
	setlocale(LC_ALL, "portuguese-brazilian"); //Usado para deixar que a acentuação utilizada na gramática portuguesa seja lida e impressa no arquivo;
	Menu menu;
	
   	menu.menu = obterOpcaoClasse();
   	menu.op = obterOpcaoOperacao();

	executarOperacao(&menu);

	system("PAUSE");
	return (0);
}
