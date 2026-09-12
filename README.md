<div align="center">

# 📚 Estrutura de Dados

Códigos e relatórios da disciplina **Estrutura de Dados e Recuperação da Informação**

[![C](https://img.shields.io/badge/Linguagem-C11-00599C?logo=c&logoColor=white)](https://en.wikipedia.org/wiki/C11_(C_standard_revision))
[![GCC](https://img.shields.io/badge/Compilador-GCC-A42E2B?logo=gnu&logoColor=white)](https://gcc.gnu.org/)
[![Platform](https://img.shields.io/badge/Plataforma-Windows%20%7C%20Linux%20%7C%20macOS-lightgrey)](#-pré-requisitos)
[![Status](https://img.shields.io/badge/Status-em%20andamento-yellow)](#-listas)
![License](https://img.shields.io/badge/Uso-Acadêmico-blue)

</div>

---

Repositório com os códigos em C das listas de exercícios de aula e os relatórios entregues (PDF/DOCX), organizados por lista.

## 📑 Sumário

- [Organização](#-organização)
- [Como foi desenvolvido](#-como-foi-desenvolvido)
- [Pré-requisitos](#-pré-requisitos)
- [Como compilar e rodar](#-como-compilar-e-rodar)
- [Erros comuns](#-erros-comuns)
- [Arquivos gerados](#-arquivos-gerados)
- [Listas](#-listas)

## 🗂️ Organização

Cada lista de exercícios fica em sua própria pasta, com um exercício por subpasta e um README próprio detalhando o enunciado:

```text
Estrutura-de-Dados/
├── lista1/
│   ├── ex1/ex1.c ... ex10/ex10.c
│   ├── Relatorio_Lista01_Estrutura_de_Dados.docx
│   ├── Relatorio Lista01 Estrutura de Dados.pdf
│   └── README.md
├── lista2/
│   ├── ex1/ex1.c ... ex5/ex5.c
│   └── README.md
└── ...
```

| Item | Onde encontrar |
| --- | --- |
| Código-fonte | `listaN/exM/exM.c` |
| Relatório entregue (quando exigido) | PDF e/ou DOCX na raiz da lista |
| Enunciado e detalhe de cada exercício | README dentro de cada `listaN/` |

## 🛠️ Como foi desenvolvido

- Linguagem **C**, padrão C11, compilado com **GCC** (via MSYS2 no Windows).
- Editor: **VS Code**, com a extensão C/C++ apenas para syntax highlighting/IntelliSense — a compilação é feita manualmente pelo terminal, a extensão não inclui compilador.
- Cada exercício é um programa isolado (`main` + funções auxiliares), sem dependências externas além da libc padrão (`stdio.h`, etc).
- Relatórios escritos separadamente (Word) e exportados em PDF, contendo as telas de entrada/saída de cada algoritmo.

## ✅ Pré-requisitos

- **Compilador C (GCC)**
- **Git** (opcional, para clonar o repositório)

<details>
<summary><strong>Instalando o GCC no Windows (MSYS2)</strong></summary>

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

</details>

<details>
<summary><strong>Linux / macOS</strong></summary>

```bash
sudo apt install build-essential   # Debian/Ubuntu
xcode-select --install             # macOS
```

</details>

**Verificando a instalação:**

```powershell
gcc --version
```

> Se o comando não for reconhecido, o `Path` não foi aplicado — reabra o terminal.

## ▶️ Como compilar e rodar

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

<details>
<summary>Compilar uma lista inteira de uma vez</summary>

A partir da raiz do repositório:

```powershell
Get-ChildItem lista1 -Recurse -Filter *.c | ForEach-Object {
    $out = Join-Path $_.Directory.FullName ($_.BaseName + ".exe")
    gcc $_.FullName -o $out -Wall -std=c11
    if ($LASTEXITCODE -eq 0) { "OK    $($_.Name)" } else { "FALHA $($_.Name)" }
}
```

(troque `lista1` pelo nome da lista desejada)

</details>

**Flags úteis:**

| Flag | Função |
| --- | --- |
| `-o <nome>` | define o nome do executável |
| `-Wall` | ativa os avisos do compilador |
| `-g` | inclui informações de depuração (debug) |
| `-std=c11` | fixa o padrão da linguagem |

## 🐛 Erros comuns

| Erro | Causa | Solução |
| --- | --- | --- |
| `./ex1.c : O termo não é reconhecido` | `.c` é código-fonte, não executável | compile antes com `gcc` |
| Acentos aparecem como `Ã§` ou `?` | console do Windows usa cp850, não UTF-8 | as mensagens dos programas são escritas sem acento de propósito |
| `make : O termo não é reconhecido` | `make` não está instalado | não é necessário aqui; use `gcc` direto |
| `gcc : O termo não é reconhecido` | compilador ausente ou fora do `Path` | ver [pré-requisitos](#-pré-requisitos) |
| `#include <stdio.h>` sublinhado no VS Code | IntelliSense não encontra o compilador | instalar o GCC e reabrir o VS Code |

## 🧹 Arquivos gerados

Executáveis (`*.exe`, `*.o`, `*.out`) não são versionados — já ignorados via `.gitignore`.

## 📋 Listas

| Lista | Conteúdo |
| --- | --- |
| [lista1](lista1/README.md) | 10 exercícios de introdução a C (entrada/saída, condicionais, laços, funções, recursão) |
| [lista2](lista2/README.md) | Funções (valor x referência x global), recursão (fatorial), ponteiros |
