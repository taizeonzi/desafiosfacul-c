## Desafio de jogo "Super Trunfo", desenvolvido na Linguagem de Programação C, na IDE VSCode.
### 📌 Projeto desenvolvido no curso Análise e Desenvolvimento de Sistemas, na disciplina Introdução à Programação de Computadores.
O tema do jogo é "Países". No jogo Super Trunfo, os jogadores comparam as propriedades das cartas para determinar a mais forte.
O desafio está dividido em três níveis: Novato, Aventureiro e Mestre, com cada nível adicionando mais complexidade ao anterior. 


### 🎮 Nível Novato do desafio, focado apenas no cadastro das cartas, utilizando as funções scanf para ler os dados e printf para exibi-los.
#### ✏️ Objetivo:
Construir a base do nosso jogo Super Trunfo de Países: um sistema para cadastrar as cartas com informações sobre as cidades. Praticar a
leitura de dados do usuário, o armazenamento em variáveis e a exibição dessas informações na tela.

#### 🚩 Descrição:
Criar um programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo. Para cada carta, o usuário deverá fornecer as seguintes informações: 
  - Estado: representando um dos oito estados. Tipo: char[] (string).
  - Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string).
  - Nome da Cidade: O nome da cidade. Tipo: char[] (string).
  - População: O número de habitantes da cidade. Tipo: int.
  - Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float.
  - PIB: O Produto Interno Bruto da cidade. Tipo: float.
  - Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int.

Após o usuário inserir os dados de cada carta, o programa deve exibir na tela as informações cadastradas, de forma organizada e legível.

#### ⚙️ Requisitos funcionais:
O programa deve ler corretamente os dados de duas cartas do usuário via entrada padrão (teclado).
O programa deve armazenar os dados lidos em variáveis apropriadas.
O programa deve exibir os dados de cada carta na tela, formatados de forma clara e organizada, conforme o exemplo acima.

#### ⚙️ Requisitos não funcionais:
Usabilidade: O programa deve ser fácil de usar, com instruções claras para o usuário.
Legibilidade: O código deve ser bem indentado, com comentários explicativos e nomes de variáveis significativos, facilitando a leitura e compreensão.
Corretude: O programa deve funcionar corretamente, sem erros de compilação ou execução.

### 🎮 Nível Aventureiro: implementar a lógica para calcular e exibir duas novas propriedades importantes para cada cidade: a densidade populacional e o PIB per capita.
#### 🚩 Descrição:
O sistema agora calculará automaticamente a Densidade Populacional e o PIB per Capita com base nos dados inseridos. Essas novas propriedades serão adicionadas às informações exibidas para cada cidade.

### 🎮 Nível Mestre: implementar a lógica de comparação entre duas cartas do Super Trunfo, determinando a vencedora de cada atributo e introduzindo o conceito de "Super Poder".
#### 🚩 Descrição:
Comparação de Cartas: O sistema permitirá ao usuário comparar duas cartas com base nas propriedades inseridas e calculadas.
Cada carta terá um "Super Poder", que é a soma de todas as propriedades.
⚙️ Funcionalidades do Sistema:
O sistema utilizará operadores relacionais para determinar a carta vencedora com base nas propriedades comparadas.

A comparação considerará:
- Densidade Populacional: Vence a carta com menor valor.
- Outras Propriedades: Vence a carta com maior valor.
- O resultado das comparações será exibido claramente para cada propriedade.
