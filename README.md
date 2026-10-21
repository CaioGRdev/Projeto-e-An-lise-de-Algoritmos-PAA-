# 💻 Projeto e Análise de Algoritmos (PAA)

Este repositório contém a minha resolução de exercícios, laboratórios e implementações práticas desenvolvidas em **Linguagem C** durante o estudo da disciplina de **Projeto e Análise de Algoritmos**.

O principal objetivo é exercitar a criação de soluções eficientes e a análise de complexidade de tempo e espaço de diferentes algoritmos.

---

## 🚀 Tecnologias e Ferramentas

*   **Linguagem:** C (padrão C11 / C99)
*   **Compilador:** GCC (GNU Compiler Collection)
*   **Ambiente de Desenvolvimento:** VS Code / Linux Terminal

---

## 📁 Estrutura do Repositório

O repositório está organizado por tópicos e paradigmas de projeto de algoritmos:

```text
├── 01-analise-assintotica/       # Exercícios de notação Big-O, Ω, Θ e recorrências
├── 02-divisao-e-conquista/      # Merge Sort, Quick Sort, Teorema Mestre
├── 03-algoritmos-gulosos/        # Problema da mochila fracionária, Códigos de Huffman
├── 04-programacao-dinamica/     # Fibonacci otimizado, Maior Subsequência Comum (LCS)
├── 05-grafos/                   # BFS, DFS, Dijkstra, Prim, Kruskal
└── 06-np-completude/            # Estudos de redução e problemas NP-completos
```

---

## 📖 Conteúdo e Paradigmas Estudados

### ⏳ 1. Análise Assintótica
*   Análise do pior caso, melhor caso e caso médio.
*   Resolução de equações de recorrência (Método de Substituição, Árvore de Recorrência e Teorema Mestre).

### 🧩 2. Divisão e Conquista
*   Quebra de problemas em subproblemas menores da mesma natureza.
*   Algoritmos de ordenação e busca linear/binária.

### 💰 3. Algoritmos Gulosos (Greedy)
*   Escolhas ótimas locais com a esperança de encontrar o ótimo global.
*   Problemas de seleção de atividades e minimização de atraso.

### 🧠 4. Programação Dinâmica
*   Solução de subproblemas sobrepostos com armazenamento de resultados (*Memoization* e *Bottom-Up*).
*   Alinhamento de sequências e problemas de corte de hastes.

### 🕸️ 5. Algoritmos em Grafos
*   Representação de grafos (Matriz e Lista de Adjacência através de ponteiros e alocação dinâmica).
*   Caminhos mínimos e árvores geradoras.

---

## 🛠️ Como Compilar e Executar

Como os algoritmos de PAA exigem alta performance, os códigos são compilados utilizando a flag de otimização máxima `-O3`.

1. Clone este repositório:
   ```bash
   git clone https://github.com
   ```
2. Acesse a pasta do exercício desejado:
   ```bash
   cd 02-divisao-e-conquista
   ```
3. Compile o arquivo utilizando o **GCC**:
   ```bash
   gcc -O3 -Wall exercicio1.c -o exercicio1
   ```
4. Execute o binário gerado:
   ```bash
   ./exercicio1
   ```

---

## 📚 Referências Bibliográficas

*   CORMEN, T. H. et al. **Introduction to Algorithms** (CLRS). 3ª ed. MIT Press, 2009.
*   KLEINBERG, J.; TARDOS, É. **Algorithm Design**. Addison-Wesley, 2005.