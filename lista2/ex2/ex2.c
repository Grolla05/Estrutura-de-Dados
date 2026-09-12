#include <stdio.h>

// protótipo da função quad, sem retorno com parâmetro inteiro como entrada
void quad(int x);

// protótipo da função dobro: sem retorno e parâmetro de entrada do tipo inteiro
void dobro(int x);

int y; // declaração de variável global que será usada para receber dobro

int main(void)
{
  int num;
  printf("Digite um numero: ");
  scanf("%d", &num);
  quad(num);
  printf("O valor de y e %d\n", y);
  dobro(num);                             // como não tem retorno, não atribuímos a nenhuma variável
  printf("O dobro de %d e %d\n", num, y); // y é variável global portanto é alterada pela função dobro
}

// quad recebe "num" do programa principal, atribui a x, calcula seu
// quadrado e exibe na tela. Observe que x é declarado localmente, então
// deixa de existir fora dessa função
void quad(int x)
{
  printf("%d ao quadrado e %d\n", x, x * x);
}

// dobro recebe "num" do programa principal, atribui a x calcula seu
// dobro e devolve ao programa principal
void dobro(int x)
{
  y = 2 * x;
}
