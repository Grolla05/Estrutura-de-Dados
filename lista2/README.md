# Lista 2 — Estrutura de Dados

Lista de Exercícios 02 (Aula 05), disciplina Estrutura de Dados e Recuperação da Informação. Entrega: 17/09/2025 (dupla permitida).

## Enunciado

1. Reproduzir o algoritmo do slide 5 da Aula 05 (testar com números diferentes dos do slide).
2. Reproduzir o algoritmo do slide 6 da Aula 05 (testar com números diferentes dos do slide).
3. Reproduzir o algoritmo do slide 10 da Aula 05 (testar com a soma dos dois últimos dígitos do RA).
4. Comparar o exercício 3 desta lista com o exercício 10 da lista 1 e explicar as diferenças na resolução.
5. Programa em C que troca os valores de duas variáveis inteiras usando ponteiros.

**Observação:** o relatório deve apresentar todas as telas de inserção de dados e saída de cada algoritmo.

## Estrutura

```text
lista2/
├── ex1/ex1.c
├── ex2/ex2.c
├── ex3/ex3.c
├── ex4/        (comparação ex3 x lista1/ex10 — texto no relatório, sem código)
└── ex5/ex5.c
```

## Exercícios

| Exercício | O que faz |
| --- | --- |
| [ex1](ex1/ex1.c) | Funções `quad` (void) e `dobro` (com retorno) sobre um número lido do usuário |
| [ex2](ex2/ex2.c) | Mesma ideia do ex1, mas usando variável global `y` em vez de retorno de função |
| [ex3](ex3/ex3.c) | Cálculo de fatorial com função recursiva |
| ex4 | Comparação textual: fatorial recursivo (ex3) vs. fatorial iterativo (lista1/ex10) |
| [ex5](ex5/ex5.c) | Troca de dois valores inteiros usando ponteiros (passagem por referência) |

## Como compilar e rodar

A partir da pasta do exercício:

```powershell
cd lista2\ex1
gcc ex1.c -o ex1.exe -Wall
.\ex1.exe
```

Pré-requisitos, instalação do GCC e erros comuns: ver o [README da lista1](../lista1/README.md).
