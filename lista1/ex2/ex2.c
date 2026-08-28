#include <stdio.h>
#include <string.h>

int main(void)
{
    // Definindo uma variável para armazenar o nome do usuário
    char nome[255];

    // Solicitando ao usuário que digite o seu nome
    printf("Digite o seu nome: ");

    // fgets em vez de scanf("%s"): o scanf pararia no primeiro espaço e leria
    // só "Maria" de "Maria de Souza". O sizeof limita a escrita ao vetor.
    if (fgets(nome, sizeof nome, stdin) == NULL)
    {
        printf("Nao foi possivel ler o nome.\n");
        return 1;
    }

    // O fgets guarda o Enter como '\n'. strcspn devolve a posição dele,
    // e o '\0' escrito ali encerra a string, descartando a quebra de linha.
    nome[strcspn(nome, "\n")] = '\0';

    // Imprimindo uma mensagem de saudação com o nome do usuário
    printf("Ola, %s!\n", nome);

    return 0;
}
