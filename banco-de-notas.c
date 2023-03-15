#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int menu;
    int i;
    char nome[40];
    int matricula;
    char nota[40];
    FILE *salas;

    printf("Olá, qual classe você gostaria de acessar?\n");
    printf("Classe A, Classe B ou Classe C?\n\n");
    scanf("Digite a Letra da Classe = %i\n\n", &i);

    switch (i)
    {
    case 'A':
        salas = fopen ("classeA.txt", "a");
        printf("Olá, o que você gostaria de fazer?");
        printf("1. Adicionar um novo aluno?;");
        printf("2. Verificar os alunos cadastrados?;");
        scanf("%i", &menu);
            switch (menu)
            {
            case 1:
                printf("Digite o nome do Aluno: \n");
                fgets(nome, 40, stdin);
                fprintf("Aluno: %s\n", nome);
                printf("Agora digite a matricula do Aluno: \n");
                scanf("%d", &matricula);
                fprintf("Número da Matricula: %d\n", matricula);
                printf("Qual a matéria e nota gostaria de adicionar? \n");
                fgets(nota, 40, stdin);
                fprintf("Materia e Nota: %s", nota);
                printf("Os dados são! Nome: %s, Número Matricula: %d e Materia/Nota: %s.\n", aluno.nome, aluno.matricula, aluno.nota);
                printf("Dados salvos com sucesso! Obrigado.\n\n");
                fclose(salas);
                break;
            case 2:
                char dados_str[100];
                salas = fopen ("classeA.txt", "r");
                printf("Carregando os dados...\n\n");
                printf("Os dados são: \n\n");
                while (fgets(dados_str, 100, salas) != NULL)
                {
                    printf("%s", dados_str);
                }
                fclose(salas);
                break;
            default:
                printf("Impossível abrir o arquivo!\n\n");
                break;
            }
            break;
        case 'B':
        salas = fopen ("classeB.txt", "a");
        printf("Olá, o que você gostaria de fazer?");
        printf("1. Adicionar um novo aluno?;");
        printf("2. Verificar os alunos cadastrados?;");
        scanf("%i", &menu);
            switch (menu)
            {
            case 1:
                printf("Digite o nome do Aluno: \n");
                fgets(nome, 40, stdin);
                fprintf("Aluno: %s\n", nome);
                printf("Agora digite a matricula do Aluno: \n");
                scanf("%d", &matricula);
                fprintf("Número da Matricula: %d\n", matricula);
                printf("Qual a matéria e nota gostaria de adicionar? \n");
                fgets(nota, 40, stdin);
                fprintf("Materia e Nota: %s", nota);
                printf("Os dados são! Nome: %s, Número Matricula: %d e Materia/Nota: %s.\n", nome, matricula, nota);
                printf("Dados salvos com sucesso! Obrigado.\n\n");
                fclose(salas);
                break;
            case 2:
                char dados_str[100];
                salas = fopen ("classeB.txt", "r");
                printf("Carregando os dados...\n\n");
                printf("Os dados são: \n\n");
                while (fgets(dados_str, 100, salas) != NULL)
                {
                    printf("%s", dados_str);
                }
                fclose(salas);
                break;
            default:
                printf("Impossível abrir o arquivo!\n\n");
                break;
            }
            break;
        case 'C':
        salas = fopen ("classeC.txt", "a");
        printf("Olá, o que você gostaria de fazer?");
        printf("1. Adicionar um novo aluno?;");
        printf("2. Verificar os alunos cadastrados?;");
        scanf("%i", &menu);
            switch (menu)
            {
            case 1:
                printf("Digite o nome do Aluno: \n");
                fgets(nome, 40, stdin);
                fprintf("Aluno: %s\n", nome);
                printf("Agora digite a matricula do Aluno: \n");
                scanf("%d", &matricula);
                fprintf("Número da Matricula: %d\n", matricula);
                printf("Qual a matéria e nota gostaria de adicionar? \n");
                fgets(nota, 40, stdin);
                fprintf("Materia e Nota: %s", nota);
                printf("Os dados são! Nome: %s, Número Matricula: %d e Materia/Nota: %s.\n", nome, matricula, nota);
                printf("Dados salvos com sucesso! Obrigado.\n\n");
                fclose(salas);
                break;
            case 2:
                char dados_str[100];
                salas = fopen ("classeC.txt", "r");
                printf("Carregando os dados...\n\n");
                printf("Os dados são: \n\n");
                while (fgets(dados_str, 100, salas) != NULL)
                {
                    printf("%s", dados_str);
                }
                fclose(salas);
                break;
            default:
                printf("Impossível abrir o arquivo!\n\n");
                break;
            }
            break;
        default:
            printf("Impossível abrir os arquivos!\n\n");
            break;
        }

    return (0);
}
