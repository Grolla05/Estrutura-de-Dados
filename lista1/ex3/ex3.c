#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    // O RA é lido como texto, não como int, porque precisamos acessar
    // dígitos em posições específicas. Isso também preserva zeros à esquerda.
    char ra[16];
    int i, terceiro, quinto, soma;

    // Solicitando o RA ao usuário
    printf("Digite o seu RA (8 digitos): ");

    // O %15s limita a leitura para não escrever além do vetor.
    // O scanf retorna quantos itens leu com sucesso.
    if (scanf("%15s", ra) != 1)
    {
        printf("Nao foi possivel ler o RA.\n");
        return 1;
    }

    // Validação 1: o RA precisa ter exatamente 8 caracteres
    if (strlen(ra) != 8)
    {
        printf("RA invalido: deve ter exatamente 8 digitos.\n");
        return 1;
    }

    // Validação 2: todo caractere precisa ser numérico.
    // Sem isso, uma entrada como "12a45678" produziria uma soma errada.
    for (i = 0; i < 8; i++)
    {
        if (!isdigit((unsigned char)ra[i]))
        {
            printf("RA invalido: use apenas numeros.\n");
            return 1;
        }
    }

    // O vetor começa no índice 0, então o 3º dígito está em ra[2] e o 5º em ra[4].
    // Subtrair '0' converte o caractere no número que ele representa ('3' - '0' == 3).
    terceiro = ra[2] - '0';
    quinto = ra[4] - '0';
    soma = terceiro + quinto;

    // Imprimindo o resultado da soma
    printf("O resultado da soma e: %d\n", soma);

    return 0;
}
