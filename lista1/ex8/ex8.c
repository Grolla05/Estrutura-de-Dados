#include <stdio.h>

int main(void)
{
    // double para aceitar temperaturas com casas decimais
    double celsius, fahrenheit;

    // Solicitando a temperatura em Celsius
    printf("Digite a temperatura em graus Celsius: ");

    // %lf é o formato de leitura para double
    if (scanf("%lf", &celsius) != 1)
    {
        printf("Entrada invalida: digite um numero.\n");
        return 1;
    }

    // Fórmula: F = (C * 9/5) + 32.
    // Escrevemos 9.0 / 5.0 para forçar divisão real; 9 / 5 entre inteiros daria 1.
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    // Imprimindo o resultado com duas casas decimais
    printf("%.2f C equivale a %.2f F\n", celsius, fahrenheit);

    return 0;
}
