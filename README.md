# Estrutura-de-Dados

Este repositório está destinado a disciplina de estrutura de dados.

## Estrutura

Cada exercício fica em sua própria pasta, e o arquivo `.c` leva o número do exercício:

```text
Estrutura-de-Dados/
└── lista1/
    ├── ex1/ex1.c
    ├── ex2/ex2.c
    ├── ...
    └── ex10/ex10.c
```

### Lista 1

| Exercício | O que faz |
| --- | --- |
| [ex1](lista1/ex1/ex1.c) | Lê três números e os imprime em ordem crescente usando `if`/`else` |
| [ex2](lista1/ex2/ex2.c) | Pergunta o nome do usuário e imprime na tela |
| [ex3](lista1/ex3/ex3.c) | Lê o RA (8 dígitos) e soma o terceiro com o quinto dígito |
| [ex4](lista1/ex4/ex4.c) | Faz a mesma soma do ex3 e imprime a contagem regressiva até 0 |
| [ex5](lista1/ex5/ex5.c) | Lê o RA e informa, pelo último dígito, se ele é par ou ímpar |
| [ex6](lista1/ex6/ex6.c) | Lê três inteiros, soma e diz se a soma é par ou ímpar |
| [ex7](lista1/ex7/ex7.c) | Lê quatro números reais e calcula a média |
| [ex8](lista1/ex8/ex8.c) | Converte uma temperatura de Celsius para Fahrenheit |
| [ex9](lista1/ex9/ex9.c) | Lê um inteiro maior que 1 e imprime todos os números de 1 até ele |
| [ex10](lista1/ex10/ex10.c) | Lê um inteiro não negativo e calcula o fatorial |

## Pré-requisitos

- **Compilador C (GCC)** — as extensões de C/C++ do VS Code não incluem compilador; elas apenas chamam um binário externo. É necessário instalar o GCC separadamente.
- **Git** (opcional, para clonar o repositório).

### Instalando o GCC no Windows (MSYS2)

1. Instalar o MSYS2:

   ```powershell
   winget install -e --id MSYS2.MSYS2
   ```

2. Abrir o aplicativo **MSYS2 UCRT64** e instalar o compilador:

   ```bash
   pacman -S --needed mingw-w64-ucrt-x86_64-gcc
   ```

3. Adicionar `C:\msys64\ucrt64\bin` ao `Path` das **variáveis de ambiente do usuário**:

   ```powershell
   $novo = 'C:\msys64\ucrt64\bin'
   $atual = [Environment]::GetEnvironmentVariable('Path','User')
   if ($atual -split ';' -notcontains $novo) {
       [Environment]::SetEnvironmentVariable('Path', "$atual;$novo", 'User')
   }
   ```

4. Fechar e reabrir o VS Code (terminais abertos mantêm o `Path` antigo).

### Linux / macOS

```bash
sudo apt install build-essential   # Debian/Ubuntu
xcode-select --install             # macOS
```

### Verificando a instalação

```powershell
gcc --version
```

Se o comando não for reconhecido, o `Path` não foi aplicado — reabra o terminal.

## Como compilar e rodar

A partir da pasta do exercício:

```powershell
cd lista1\ex1
gcc ex1.c -o ex1.exe -Wall
.\ex1.exe
```

No Linux/macOS o executável não leva extensão:

```bash
cd lista1/ex1
gcc ex1.c -o ex1 -Wall
./ex1
```

Para compilar a lista inteira de uma vez, a partir da raiz do repositório:

```powershell
Get-ChildItem lista1 -Recurse -Filter *.c | ForEach-Object {
    $out = Join-Path $_.Directory.FullName ($_.BaseName + ".exe")
    gcc $_.FullName -o $out -Wall -std=c11
    if ($LASTEXITCODE -eq 0) { "OK    $($_.Name)" } else { "FALHA $($_.Name)" }
}
```

Flags úteis:

| Flag | Função |
| --- | --- |
| `-o <nome>` | define o nome do executável |
| `-Wall` | ativa os avisos do compilador |
| `-g` | inclui informações de depuração (debug) |
| `-std=c11` | fixa o padrão da linguagem |

## Erros comuns

| Erro | Causa | Solução |
| --- | --- | --- |
| `./ex1.c : O termo não é reconhecido` | `.c` é código-fonte, não executável | compile antes com `gcc` |
| Acentos aparecem como `Ã§` ou `?` | console do Windows usa cp850, não UTF-8 | as mensagens dos programas são escritas sem acento de propósito |
| `make : O termo não é reconhecido` | `make` não está instalado | não é necessário aqui; use `gcc` direto |
| `gcc : O termo não é reconhecido` | compilador ausente ou fora do `Path` | ver pré-requisitos acima |
| `#include <stdio.h>` sublinhado no VS Code | IntelliSense não encontra o compilador | instalar o GCC e reabrir o VS Code |

## Arquivos gerados

Executáveis (`*.exe`) não devem ser versionados. Confira se o `.gitignore` contém:

```gitignore
*.exe
*.o
*.out
```
