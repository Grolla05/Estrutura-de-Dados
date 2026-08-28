#include <stdio.h>

int main(void)
{
    int n, i;

    // unsigned long long (64 bits) é usado porque o fatorial cresce muito rápido.
    // Começa em 1 porque é o elemento neutro da multiplicação.
    unsigned long long fatorial = 1ULL;

    // Solicitando um número inteiro não negativo
    printf("Digite um numero inteiro nao negativo: ");

    if (scanf("%d", &n) != 1)
    {
        printf("Entrada invalida: digite um numero inteiro.\n");
        return 1;
    }

    // Fatorial não é definido para números negativos
    if (n < 0)
    {
        printf("Numero invalido: ele nao pode ser negativo.\n");
        return 1;
    }

    // 21! ultrapassa o limite do unsigned long long e o resultado daria a volta,
    // imprimindo um valor errado. Por isso barramos antes de calcular.
    if (n > 20)
    {
        printf("Numero muito grande: o fatorial so cabe na memoria ate 20.\n");
        return 1;
    }

    // O laço começa em 2 porque multiplicar por 1 não muda nada.
    // Quando n é 0 ou 1 ele nem executa, e fatorial continua valendo 1 (0! = 1).
    for (i = 2; i <= n; i++)
    {
        fatorial *= (unsigned long long)i;
    }

    // %llu é o formato de impressão para unsigned long long
    printf("O fatorial de %d e: %llu\n", n, fatorial);

    return 0;
}
