
# Hangman Game in C

This is a simple Hangman game implemented in C. The game selects a random word from a word bank file, and the player must guess the word, one letter at a time. The game ends when the player guesses the word correctly or makes 5 incorrect guesses.

## Features

- The game selects a random word from a `words.txt` file.
- The player can guess letters, and the game shows the progress of the hidden word.
- If the player makes 5 incorrect guesses, the game ends and they are "hanged."
- The player can add new words to the word bank during the game.

## How to Play

1. The game starts with an introduction screen.
2. The player must guess the letters of the word.
3. The game shows progress with correct letters and the drawing of a hangman figure that gets completed as the player makes mistakes.
4. The player wins if they guess all the letters of the word before making 5 mistakes.
5. If not, the player loses, and the word is revealed.

## How to Run

1. Make sure you have a C compiler installed, such as `gcc`.
2. Compile the code using the following command:

   ```bash
   gcc hanginggame.c -o hanging
   ```

3. Run the game:

   ```bash
   ./hanging
   ```

## Requirements

- The game relies on a `words.txt` file containing a word bank. The format of the file is as follows:
  - The first line should contain the number of words in the file.
  - Each word should be on a separate line.

### Example of `palavras.txt`:

```
5
WATERMELOON
BANANA
ORANGE
STRAWBERRY
APPLE
```

## Skills Developed in C

Developing this Hangman game in C helps improve several important C programming skills, including:

### 1. **String Manipulation**
   - Using functions like `strlen`, `fscanf`, and `scanf` to work with strings allows for practicing text manipulation and comparison, which is crucial in many programs that deal with text input and output.

### 2. **Control Flow and Loop Structures**
   - The use of structures like `for`, `while`, and `if-else` in controlling the flow of the game, allowing iteration over lists and making decisions based on specific conditions, such as the number of errors made.

### 3. **File Handling**
   - The ability to open, read, and write to files is essential in C. In this game, the word bank is loaded from a `words.txt` file, and the code also allows for adding new words to the file during runtime.

### 4. **Memory Management**
   - While explicit dynamic memory allocation is not used in this code, working with static arrays for storing letters and guesses helps reinforce memory management practices.

### 5. **Functions and Modularization**
   - The code is organized into specific functions for tasks like drawing the hangman (`drawHangman`), checking if a letter has been guessed (`alreadyGuessed`), and verifying if the player has won (`hasWon`). This enhances the readability and modularization of the code, which is a recommended practice in programming.

### 6. **Programming Logic and Algorithms**
   - The game implements several simple algorithms, such as checking if the player has guessed all the letters, counting mistakes, and drawing the hangman state. Additionally, using a random number generator (`rand`) to select words provides an introduction to game programming and dynamic systems.

### 7. **User Interaction**
   - The code makes use of interactive inputs and outputs with the player, helping develop the ability to capture user input and provide dynamic feedback during the program's execution.

### 8. **Working with Conditional Data**
   - The implementation of checking the game state (whether the player has won or lost) depends on evaluating conditional data as the game progresses, allowing practice with verification logic and decision-making.

### 9. **Using Standard Libraries**
   - The code uses several standard C libraries like `stdio.h`, `stdlib.h`, `string.h`, and `time.h`, which are essential for handling input/output, string manipulation, and random numbers.

### 10. **Working with Simple Data Types**
   - The code uses basic data types like `char` and `int` to represent letters, guesses, and counters, reinforcing the understanding of primitive types and their manipulation.

## Functions

### `letterExists(char letter)`

Checks if the given letter exists in the secret word.

### `wrongguesses()`

Counts how many incorrect guesses the player has made so far.

### `isHanged()`

Returns true if the player has made 5 incorrect guesses.

### `hasWon()`

Checks if the player has guessed all the letters of the secret word.

### `opening()`

Displays the introduction of the game.

### `makeGuess()`

Reads the player's guess and checks if they guessed correctly or incorrectly.

### `alreadyGuessed(char letter)`

Checks if the player has already guessed a specific letter.

### `drawHangman()`

Draws the current state of the hangman figure.

### `selectWord()`

Selects a random word from the `palavras.txt` file.

### `insertWord()`

Allows the player to add a new word to the word bank.

## Contributions

Feel free to improve or add new features to this game! If you find any bugs or have suggestions, please open an issue or submit a pull request.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

# PT-BR

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

