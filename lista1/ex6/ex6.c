#include <stdio.h>

int main(void)
{
    // Definindo as variáveis dos três números e da soma
    int a, b, c, soma;

    // Solicitando ao usuário que digite três números inteiros
    printf("Digite tres numeros inteiros: ");

    // O scanf retorna quantos valores leu; se não forem 3, a entrada é inválida
    if (scanf("%d %d %d", &a, &b, &c) != 3)
    {
        printf("Entrada invalida: digite tres numeros inteiros.\n");
        return 1;
    }

    soma = a + b + c;

    // Comparamos com 0 porque em C o resto de um número negativo é negativo:
    // -3 % 2 vale -1, então testar "== 1" falharia para somas negativas.
    if (soma % 2 == 0)
    {
        printf("A soma e %d, que e um numero par.\n", soma);
    }
    else
    {
        printf("A soma e %d, que e um numero impar.\n", soma);
    }

    return 0;
}
