#include <stdio.h>

int main(void)
{
    // Definindo as variáveis para armazenar os números
    int a, b, c;
    
    // Solicitando ao usuário que digite três números inteiros
    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    // Cada ramo cobre uma das 6 ordens possíveis entre a, b e c.
    // Usamos <= (e não <) para que números repetidos caiam no ramo certo.
    if (a <= b && b <= c)
    {
        printf("Ordem crescente: %d %d %d\n", a, b, c);
    }
    else if (a <= c && c <= b)
    {
        printf("Ordem crescente: %d %d %d\n", a, c, b);
    }
    else if (b <= a && a <= c)
    {
        printf("Ordem crescente: %d %d %d\n", b, a, c);
    }
    else if (b <= c && c <= a)
    {
        printf("Ordem crescente: %d %d %d\n", b, c, a);
    }
    else if (c <= a && a <= b)
    {
        printf("Ordem crescente: %d %d %d\n", c, a, b);
    }
    else
    {
        printf("Ordem crescente: %d %d %d\n", c, b, a);
    }

    return 0;
}
