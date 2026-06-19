# mercadinho-introducao-ciencia-computacao
Projeto em grupo de um Mercadinho informatizado, desenvolvido em C99 para a disciplina de Introdução à Ciência da Computação (SCC 0221) no ICMC-USP (1º Semestre/2026)

# Projeto Mercadinho - ICC (SCC 0221)

Projeto em grupo de um Mercadinho, construído para a disciplina de Introdução à Ciência da Computação no ICMC-USP (1º Semestre/2026).

## Funcionalidades a Implementadas
- **IP - Insere Produto**: Fornecidos o nome do produto, a quantidade recebida e o preço (Não gera custo; usa alocação dinâmica).
- **AE - Aumenta Estoque**: Fornecidos o código do produto e a quantidade a adicionar (Gera custo no caixa).
- **MP - Modifica Preço**: Fornecidos o código do produto e o novo preço.
- **VE - Venda**: Fornecidos os códigos dos produtos; o sistema imprime na tela os nomes, preços e o valor total.
- **CE - Consulta Estoque**: Lista código, nome e quantidade no estoque de todos os produtos.
- **CS - Consulta Saldo**: Consulta o saldo atual do caixa (Inicia em R$ 100,00).
- **FE - Finalizar o Dia**: Grava todas as informações em arquivo para o dia seguinte, libera a memória e encerra o programa.

## Instruções do Projeto:
  - Cada funcionalidade deve ser implementada como uma função em C. Funcionalidade inclui também funções não diretamente (explicitamente) previstas nesta especificação.
  - Os códigos dos produtos são números inteiros positivos começando por 0. O máximo não é determinado.
  - Os códigos são atribuídos sequencialmente aos produtos assim que eles são inseridos.
  - Os nomes dos produtos não devem conter espaços.
  - Assume-se que os comandos sempre serão apresentados de forma correta e que sempre serão fornecidos códigos válidos, portanto não é necessário tratar esse tipo de erro.
  - Aquisições feitas pelo dono do mercado (aumento do estoque) geram custo (interferem no caixa). O saldo pode ficar negativo.
  - Inserir Produto não gera custo. Somente insere na quantidade e preço especificados.
  - O saldo inicial do caixa é de 100 reais.
  - Ao iniciar, o sistema deverá primeiro ler o arquivo do dia anterior, carregando todos dados, como caixa, produtos, estoque.
  - Caso o arquivo do dia anterior não exista deverá perguntar o espaço atual do estoque (quantos produtos cabem no estoque (alocação dinâmica)).
  - O programa só deverá encerrar após o comando de finalizar o dia.
