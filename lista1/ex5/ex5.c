#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    // O RA é lido como texto para permitir acessar dígitos por posição
    char ra[16];
    int i, ultimo;

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

    // A paridade de um número depende apenas do último dígito,
    // então basta olhar ra[7] em vez de converter o RA inteiro.
    ultimo = ra[7] - '0';

    // O operador % devolve o resto da divisão; resto 0 por 2 significa par
    if (ultimo % 2 == 0)
    {
        printf("O ultimo digito e %d, entao o seu RA e par.\n", ultimo);
    }
    else
    {
        printf("O ultimo digito e %d, entao o seu RA e impar.\n", ultimo);
    }

    return 0;
}
