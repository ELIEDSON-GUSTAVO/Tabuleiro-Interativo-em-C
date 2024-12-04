Tabuleiro Interativo em C

Este programa em C implementa um sistema interativo para marcar posições em um tabuleiro 8x8 usando coordenadas no formato letra+número (por exemplo, a1, c3). Ele foi projetado para rodar em terminais padrão e oferece uma interface simples para interação.

Funcionalidades
Tabuleiro Dinâmico:

Um tabuleiro 8x8 é inicializado vazio, com todas as posições marcadas como 0.
O usuário pode marcar até 3 posições no tabuleiro, que serão alteradas para 1.
Validação de Entrada:

O programa aceita coordenadas no formato letra+número.
Validações são feitas para garantir que:
A coordenada está dentro do formato correto.
A posição está dentro dos limites do tabuleiro.
Caso a entrada seja inválida, o usuário é solicitado a tentar novamente.
Exibição do Tabuleiro:

O tabuleiro é exibido com colunas rotuladas por letras (a-h) e linhas rotuladas por números (1-8).
Cores são usadas para melhorar a visualização (em terminais que suportam ANSI):
Vermelho (1): Posições marcadas pelo usuário.
Verde (0): Posições vazias.
Azul: Legendas de linhas e colunas.
Como Funciona
Estrutura Principal
Inicialização do Tabuleiro:

A função inicializarTabuleiro define todas as posições do tabuleiro como '0'.
Entrada do Usuário:

O programa solicita ao usuário que insira 3 coordenadas.
Cada coordenada é validada e convertida para índices da matriz que representa o tabuleiro.
Marcação no Tabuleiro:

Após validação, a posição correspondente é marcada como '1'.
Exibição do Resultado:

A função exibirTabuleiro mostra o tabuleiro atualizado com as marcações realizadas.
Validações
Verifica se a entrada possui exatamente 2 caracteres.
Garante que o primeiro caractere seja uma letra (a-h) e o segundo um número (1-8).
Garante que a coordenada está dentro dos limites do tabuleiro.
