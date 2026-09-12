#include <stdio.h>

// protótipo da função quad, sem retorno com parâmetro inteiro como entrada
void quad(int x);

// protótipo da função dobro: com retorno e parâmetro de entrada do tipo inteiro
int dobro(int x);

int main(void)
{
  int num, num2;
  printf("Digite um numero: ");
  scanf("%d", &num);
  quad(num);
  num2 = dobro(num);
  printf("O dobro de %d é %d\n", num, num2);
}

/* quad recebe "num" do programa principal, atribui a x, calcula
seu quadrado e exibe na tela. Observe que x é declarado localmente,
então deixa de existir fora dessa função */
void quad(int x)
{
  printf("%d ao quadrado é %d\n", x, x * x);
}

/* dobro recebe "num" do programa principal, atribui a x calcula
seu dobro e devolve ao programa principal*/
int dobro(int x)
{
  int y = 2 * x;
  return y;
}
