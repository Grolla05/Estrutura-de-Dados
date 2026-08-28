#include <stdio.h>

int main(void)
{
    // double armazena números reais (com casas decimais), diferente de int
    double a, b, c, d, media;

    // Solicitando ao usuário que digite quatro números reais
    printf("Digite quatro numeros reais: ");

    // %lf é o formato de leitura para double (%f seria para float)
    if (scanf("%lf %lf %lf %lf", &a, &b, &c, &d) != 4)
    {
        printf("Entrada invalida: digite quatro numeros reais.\n");
        return 1;
    }

    // Dividimos por 4.0 (e não por 4) para manter a divisão em ponto flutuante
    media = (a + b + c + d) / 4.0;

    // %.2f imprime o resultado com duas casas decimais
    printf("A media dos quatro numeros e: %.2f\n", media);

    return 0;
}
