#include <stdio.h>
void troca(int *a, int *b);//protótipo da função troca: sem retorno e parâmetros do tipo ponteiro para inteiro

int main(void) {
  int num1, num2;
  printf("Digite o primeiro numero: ");
  scanf("%d",&num1);
  printf("Digite o segundo numero: ");
  scanf("%d",&num2);

  printf("Antes da troca: num1 = %d, num2 = %d\n",num1,num2);
  troca(&num1,&num2);//passa o endereço das variáveis para a função
  printf("Depois da troca: num1 = %d, num2 = %d\n",num1,num2);

  return 0;
}

//troca recebe os endereços de duas variáveis inteiras e troca seus
//valores diretamente na memória, por isso não precisa de retorno
void troca(int *a, int *b) {
  int aux;
  aux = *a;
  *a = *b;
  *b = aux;
}
