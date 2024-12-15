<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Jogo da Forca em C</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            line-height: 1.6;
            margin: 0;
            padding: 0;
            background-color: #f4f4f9;
            color: #333;
        }
        header {
            background: #333;
            color: #fff;
            padding: 10px 20px;
            text-align: center;
        }
        section {
            max-width: 800px;
            margin: 20px auto;
            padding: 20px;
            background: #fff;
            border-radius: 8px;
            box-shadow: 0 2px 4px rgba(0, 0, 0, 0.1);
        }
        h1, h2 {
            color: #333;
        }
        code {
            background: #e8e8e8;
            padding: 2px 6px;
            border-radius: 4px;
        }
        pre {
            background: #e8e8e8;
            padding: 10px;
            border-radius: 4px;
            overflow-x: auto;
        }
        ul {
            margin: 10px 0;
            padding-left: 20px;
        }
    </style>
</head>
<body>
    <header>
        <h1>Jogo da Forca em C</h1>
    </header>
    <section>
        <h2>Descrição</h2>
        <p>Este projeto é uma implementação do clássico jogo da forca em linguagem C. Foi desenvolvido para consolidar diversos conceitos fundamentais da programação em C, como manipulação de strings, estruturas de controle, funções, leitura e escrita em arquivos, e uso de bibliotecas padrão.</p>

        <h2>Funcionalidades</h2>
        <ul>
            <li><strong>Escolha de palavras:</strong> As palavras são armazenadas em um arquivo <code>palavras.txt</code>, permitindo a fácil adição de novas palavras.</li>
            <li><strong>Verificação de letras:</strong> O programa verifica se as letras chutadas estão presentes na palavra secreta.</li>
            <li><strong>Controle de erros:</strong> O jogador tem até 5 chances para errar antes de ser "enforcado".</li>
            <li><strong>Desenho da forca:</strong> Cada erro adiciona uma parte ao desenho da forca, até completar o enforcamento.</li>
            <li><strong>Adicionar palavras:</strong> O jogador pode adicionar novas palavras ao banco de dados diretamente pelo jogo.</li>
        </ul>

        <h2>Estrutura do Código</h2>
        <ul>
            <li><code>abertura</code>: Exibe a mensagem de boas-vindas.</li>
            <li><code>escolhepalavra</code>: Lê o banco de dados e seleciona uma palavra aleatória.</li>
            <li><code>desenhaforca</code>: Desenha a forca e revela o progresso da palavra secreta.</li>
            <li><code>chuta</code>: Recebe a letra chutada pelo jogador e verifica sua presença na palavra.</li>
            <li><code>ganhou</code> e <code>enforcou</code>: Determinam o fim do jogo com base nas condições de vitória ou derrota.</li>
            <li><code>adicionapalavra</code>: Permite adicionar novas palavras ao banco de dados.</li>
        </ul>

        <h2>Requisitos</h2>
        <ul>
            <li>Compilador C (como GCC).</li>
            <li>Arquivo <code>palavras.txt</code> contendo a lista de palavras. A primeira linha deve conter o número total de palavras.</li>
        </ul>

        <h3>Exemplo de arquivo <code>palavras.txt</code>:</h3>
        <pre>
3
CASA
CARRO
COMPUTADOR
        </pre>

        <h2>Como Executar</h2>
        <ol>
            <li><strong>Clone o repositório</strong> ou copie os arquivos do projeto para sua máquina.</li>
            <li>Certifique-se de que o arquivo <code>palavras.txt</code> está no mesmo diretório do programa.</li>
            <li>Compile o código utilizando o GCC:</li>
            <pre>
$ gcc forca.c -o forca
            </pre>
            <li>Execute o programa:</li>
            <pre>
$ ./forca
            </pre>
        </ol>

        <h2>Aprendizados</h2>
        <p>Durante o desenvolvimento deste projeto, foram reforçados os seguintes conceitos:</p>
        <ul>
            <li>Manipulação de strings com a biblioteca <code>string.h</code>.</li>
            <li>Uso de arquivos para persistência de dados com as funções <code>fopen</code>, <code>fscanf</code>, <code>fprintf</code>, etc.</li>
            <li>Geração de números aleatórios com <code>rand()</code> e <code>srand()</code>.</li>
            <li>Controle de fluxo e uso de loops aninhados.</li>
            <li>Modularização do código com funções para melhorar a organização e a reutilização.</li>
        </ul>

        <h2>Melhorias Futuras</h2>
        <ul>
            <li>Implementar suporte a palavras com acentos.</li>
            <li>Melhorar o tratamento de erros (como entrada inválida pelo usuário).</li>
            <li>Adicionar uma interface gráfica ou versão web.</li>
            <li>Permitir níveis de dificuldade com base no tamanho da palavra ou no número de tentativas.</li>
        </ul>

        <h2>Créditos</h2>
        <p>Este projeto foi desenvolvido para fins educacionais como parte do aprendizado de programação em C.</p>
    </section>
</body>
</html>
