
# Jogo da Forca em C

Este é um jogo simples de forca implementado em linguagem C. O jogo escolhe uma palavra aleatória de um banco de dados de palavras, e o jogador deve adivinhar a palavra, letra por letra. O jogo termina quando o jogador acerta a palavra ou comete 5 erros.

## Funcionalidades

- O jogo escolhe uma palavra aleatória de um arquivo `palavras.txt`.
- O jogador pode adivinhar letras e o jogo mostra o progresso da palavra oculta.
- Se o jogador errar 5 vezes, o jogo termina e ele "é enforcado".
- O jogador pode adicionar novas palavras ao banco de dados durante o jogo.

## Como Jogar

1. O jogo começa com uma tela de introdução.
2. O jogador deve adivinhar as letras da palavra.
3. O progresso do jogo é mostrado com as letras acertadas e o desenho de uma forca que vai se completando à medida que o jogador erra.
4. O jogador ganha se acertar todas as letras da palavra antes de cometer 5 erros.
5. Caso contrário, o jogador perde e a palavra é revelada.

## Como Executar

1. Certifique-se de ter o compilador C instalado, como `gcc`.
2. Compile o código com o seguinte comando:

   ```bash
   gcc jogodaforca.c -o jogodaforca
   ```

3. Execute o jogo:

   ```bash
   ./jogodaforca
   ```

## Requisitos

- O jogo depende de um arquivo `palavras.txt` que contém um banco de palavras. O formato do arquivo é:
  - A primeira linha deve conter o número de palavras no arquivo.
  - Cada palavra deve estar em uma linha separada.

### Exemplo de `palavras.txt`:

```
5
MELANCIA
BANANA
LARANJA
MORANGO
UVA
```

## Competências em C Desenvolvidas

Desenvolver este jogo de forca em C permite aprimorar diversas competências importantes na programação em C, incluindo:

### 1. **Manipulação de Strings**
   - O uso de funções como `strlen`, `fscanf` e `scanf` para trabalhar com strings permite praticar a manipulação e comparação de textos, o que é fundamental em diversos programas que lidam com entradas e saídas de texto.

### 2. **Controle de Fluxo e Estruturas de Repetição**
   - O uso de estruturas como `for`, `while` e `if-else` no controle de fluxo do jogo, permitindo iterar sobre listas e tomar decisões baseadas em condições específicas, como o número de erros cometidos.

### 3. **Trabalho com Arquivos**
   - A habilidade de abrir, ler e escrever em arquivos é essencial em C. Neste jogo, o banco de palavras é carregado de um arquivo `palavras.txt`, e o código também permite adicionar novas palavras ao arquivo durante a execução.

### 4. **Gerenciamento de Memória**
   - A manipulação de variáveis estáticas e dinâmicas e o entendimento de como o C gerencia a memória são trabalhados de forma implícita. Embora não haja alocação dinâmica explícita neste código, o uso de arrays para armazenar letras e chutes envolve gestão de memória.

### 5. **Uso de Funções e Modularização**
   - O código é estruturado com funções específicas para tarefas como desenhar a forca (`desenhaforca`), verificar se a letra foi chutada (`jachutou`), e verificar se o jogador ganhou (`ganhou`). Isso melhora a legibilidade e modularização do código, uma prática recomendada na programação.

### 6. **Lógica de Programação e Algoritmos**
   - O jogo implementa uma série de algoritmos simples, como verificar se o jogador adivinhou todas as letras da palavra, contar os erros e desenhar o estado da forca. Além disso, o uso do gerador de números aleatórios (`rand`) para escolher palavras fornece uma introdução à programação de jogos e sistemas dinâmicos.

### 7. **Interação com o Usuário**
   - O código faz uso de entradas e saídas interativas com o usuário, o que ajuda a desenvolver a habilidade de capturar entradas e fornecer feedback dinâmico durante a execução do programa.

### 8. **Trabalhando com Dados Condicionais**
   - A implementação da verificação do estado do jogo (se o jogador venceu ou perdeu) depende de dados condicionais que são avaliados ao longo da execução, permitindo praticar a lógica de verificação e tomada de decisão.

### 9. **Usando Bibliotecas Padrão**
   - O código faz uso de várias bibliotecas padrão em C, como `stdio.h`, `stdlib.h`, `string.h`, e `time.h`, que são essenciais para lidar com entrada/saída, manipulação de strings e números aleatórios.

### 10. **Trabalhando com Tipos de Dados Simples**
   - O código usa tipos de dados simples, como `char` e `int`, para representar as letras, chutes e contadores, o que reforça o entendimento sobre tipos primitivos e suas manipulações.

## Funções

### `letraexiste(char letra)`

Verifica se a letra fornecida existe na palavra secreta.

### `chuteserrados()`

Conta quantos chutes errados o jogador deu até o momento.

### `enforcou()`

Retorna verdadeiro se o jogador errou 5 vezes.

### `ganhou()`

Verifica se o jogador adivinhou todas as letras da palavra secreta.

### `abertura()`

Exibe a introdução do jogo.

### `chuta()`

Lê o chute do jogador e verifica se ele acertou ou errou.

### `jachutou(char letra)`

Verifica se o jogador já chutou uma determinada letra.

### `desenhaforca()`

Desenha o estado atual da forca.

### `escolhepalavra()`

Escolhe uma palavra aleatória do arquivo `palavras.txt`.

### `adicionapalavra()`

Permite ao jogador adicionar uma nova palavra ao banco de dados.

## Contribuições

Sinta-se à vontade para fazer melhorias ou adicionar novas funcionalidades a este jogo! Se você encontrar algum bug ou tiver sugestões, abra uma issue ou envie um pull request.

## Licença

