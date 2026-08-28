#include <stdio.h>

int main(void)
{
    // n guarda o limite digitado e i é o contador do laço
    int n, i;

    // Solicitando um número inteiro maior que 1
    printf("Digite um numero inteiro positivo maior que 1: ");

    // O scanf retorna 1 se conseguiu ler um inteiro
    if (scanf("%d", &n) != 1)
    {
        printf("Entrada invalida: digite um numero inteiro.\n");
        return 1;
    }

    // O enunciado exige um número maior que 1, então recusamos o resto.
    // O return 1 encerra o programa sinalizando erro.
    if (n <= 1)
    {
        printf("Numero invalido: ele precisa ser maior que 1.\n");
        return 1;
    }

    // O laço vai de 1 até n. A condição i <= n (e não i < n)
    // garante que o próprio n seja impresso.
    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
