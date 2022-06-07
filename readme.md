## Trabalho 1 - Tabelas de Referência em Ordenação (10 pontos)
### Tema do trabalho: Construção de Tabelas de Referência em Ordenação
### Data: 24/06/2022
### Grupo de até 2 (dois) alunos
### Objeto da entrega: Relatório em PDF contendo o link para o repositório do código (Replit.com)

1) Plano de Fundo: 

Definir uma estrutura de dados contendo no mínimo 2 campos sendo um inteiro e um string. O grupo pode escolher a estrutura que quiser, e será necessária a criação de vetores contendo elementos deste tipo, com valores aleatórios. Os vetores serão utilizados para a construção das tabelas de referência em ordenação. Ver exemplo.

    struct Produto {

           char descrição[30];
           int numero;
    };
2) Métodos de Ordenação

Os métodos de ordenação a serem utilizados na construção das tabelas de referência devem ser definidos de acordo com as seguintes regras:

Escolher 1 entre: Bolha, Seleção e Inserção 
Escolher 1 entre: Shellsort, Heapsort e Mergesort
Incluir Quicksort com mediana de três
Incluir Pancake Sort
Incluir Counting Sort (apenas para o campo dos inteiros, não é baseado em comparações)
Incluir outro método, excluindo-se os citados nos itens anteriores, à escolha do grupo.
3) Construção das Tabelas de Referência

Devem ser construídas duas tabelas de referência: uma para o campo inteiro e outra para o campo string.

Para cada tabela: Considerar vetores de diversos tamanhos, executar os métodos de ordenação e anotar os tempos obtidos (médias de 10 execuções). Uma tabela como a da figura abaixo deve ser gerada.

Benchmarking Sorting Algorithms in Python - angela1c.com
Usar 5 fatias de tempo entre 10.000 e 100.000 elementos.

4) Relatório

Confeccionar um relatório do projeto, contendo introdução, visão geral dos métodos escolhidos, impressão e análise dos resultados obtidos e conclusão. Na capa do relatório devem constar os nomes dos alunos e o link para o repositório em que o código está armazenado (Replit.com).
