#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    // O RA é lido como texto para permitir acessar dígitos por posição
    char ra[16];
    int i, terceiro, quinto, soma;

    // Solicitando o RA ao usuário
    printf("Digite o seu RA (8 digitos): ");

    // O %15s limita a leitura para não escrever além do vetor
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

    // Validação 2: todo caractere precisa ser numérico
    for (i = 0; i < 8; i++)
    {
        if (!isdigit((unsigned char)ra[i]))
        {
            printf("RA invalido: use apenas numeros.\n");
            return 1;
        }
    }

    // 3º dígito em ra[2] e 5º em ra[4]; subtrair '0' converte char em número
    terceiro = ra[2] - '0';
    quinto = ra[4] - '0';
    soma = terceiro + quinto;

    printf("Soma do terceiro e do quinto digito: %d\n", soma);
    printf("Contagem regressiva:\n");

    // O laço parte da soma e decrementa até 0. A condição i >= 0
    // (e não i > 0) garante que o zero também seja impresso.
    for (i = soma; i >= 0; i--)
    {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
