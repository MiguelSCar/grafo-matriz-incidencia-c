# Grafo - Matriz de Incidência em C

## 📖 Sobre o projeto

Este projeto consiste na implementação de um sistema para manipulação de grafos utilizando a linguagem **C** e a representação por **matriz de incidência**.

O programa permite criar e manipular um grafo de forma simples por meio de um menu interativo executado no terminal.

O projeto foi desenvolvido como atividade da disciplina de **Estruturas de Dados**, com o objetivo de aplicar conceitos relacionados à representação e manipulação de grafos.

---

## 🚀 Funcionalidades

- Inserção de arestas entre vértices;
- Exibição da matriz de incidência;
- Cálculo do grau de um vértice;
- Exibição do grau de todos os vértices;
- Listagem das arestas cadastradas;
- Limpeza completa do grafo;
- Menu interativo.

---

## 🧠 Representação utilizada

O grafo é representado por uma **matriz de incidência**, onde:

- Cada **linha** representa um vértice;
- Cada **coluna** representa uma aresta;
- O valor **1** indica que o vértice pertence à aresta;
- O valor **0** indica que não existe incidência.

Exemplo:

|      | e0 | e1 |
|------|----|----|
| v0 | 1 | 0 |
| v1 | 1 | 1 |
| v2 | 0 | 1 |

---

## 🛠️ Tecnologias

- Linguagem C
- Compilador GCC
- Programiz (utilizado durante o desenvolvimento)

---

## 📂 Estrutura

```
.
├── main.c
└── README.md
```

---

## ▶️ Como executar

Compile o programa utilizando o GCC:

```bash
gcc main.c -o grafo
```

Execute:

```bash
./grafo
```

No Windows:

```bash
grafo.exe
```

---

## 📋 Exemplo de uso

```
Quantidade de vertices: 5

========== MENU ==========
1 - Inserir aresta
2 - Mostrar matriz
3 - Grau de um vertice
4 - Grau de todos os vertices
5 - Listar arestas
6 - Limpar grafo
0 - Sair
==========================

Opcao:
```

---

## 📚 Conceitos aplicados

- Grafos
- Matriz de incidência
- Matrizes bidimensionais
- Estruturas de repetição
- Funções
- Manipulação de memória em C
- Estruturas de Dados

---

## 👨‍💻 Autor

Desenvolvido como projeto acadêmico para a disciplina de **Estruturas de Dados**.
