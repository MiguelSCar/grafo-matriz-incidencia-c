#include <stdio.h>

#define MAX_VERTICES 100
#define MAX_ARESTAS 100

int matriz[MAX_VERTICES][MAX_ARESTAS];
int numVertices;
int numArestas = 0;

// Inicializa a matriz
void InicializarGrafo() {
    for (int i = 0; i < MAX_VERTICES; i++) {
        for (int j = 0; j < MAX_ARESTAS; j++) {
            matriz[i][j] = 0;
        }
    }
    numArestas = 0;
}

// Insere uma aresta
void InserirAresta() {
    if (numArestas >= MAX_ARESTAS) {
        printf("\nLimite de arestas atingido!\n");
        return;
    }

    int v1, v2;

    printf("Vertice 1: ");
    scanf("%d", &v1);

    printf("Vertice 2: ");
    scanf("%d", &v2);

    if (v1 < 0 || v1 >= numVertices || v2 < 0 || v2 >= numVertices) {
        printf("\nVertices invalidos!\n");
        return;
    }

    matriz[v1][numArestas] = 1;
    matriz[v2][numArestas] = 1;

    printf("\nAresta e%d = (%d,%d) inserida.\n", numArestas, v1, v2);

    numArestas++;
}

// Mostra matriz de incidência
void MostrarMatriz() {

    printf("\nMATRIZ DE INCIDENCIA\n\n");

    printf("      ");
    for (int j = 0; j < numArestas; j++) {
        printf("e%d ", j);
    }

    printf("\n");

    for (int i = 0; i < numVertices; i++) {
        printf("v%d    ", i);

        for (int j = 0; j < numArestas; j++) {
            printf("%d  ", matriz[i][j]);
        }

        printf("\n");
    }
}

// Calcula grau
int GrauVertice(int vertice) {

    int grau = 0;

    for (int j = 0; j < numArestas; j++) {
        grau += matriz[vertice][j];
    }

    return grau;
}

// Mostra grau de um vértice
void MostrarGrauVertice() {

    int v;

    printf("Vertice: ");
    scanf("%d", &v);

    if (v < 0 || v >= numVertices) {
        printf("\nVertice invalido!\n");
        return;
    }

    printf("\nGrau(%d) = %d\n", v, GrauVertice(v));
}

// Mostra grau de todos
void MostrarTodosGraus() {

    printf("\nGRAUS DOS VERTICES\n\n");

    for (int i = 0; i < numVertices; i++) {
        printf("Grau(%d) = %d\n", i, GrauVertice(i));
    }
}

// Lista arestas
void ListarArestas() {

    printf("\nARESTAS DO GRAFO\n\n");

    for (int j = 0; j < numArestas; j++) {

        int v1 = -1;
        int v2 = -1;

        for (int i = 0; i < numVertices; i++) {

            if (matriz[i][j] == 1) {

                if (v1 == -1)
                    v1 = i;
                else
                    v2 = i;
            }
        }

        printf("e%d = (%d,%d)\n", j, v1, v2);
    }

    if (numArestas == 0) {
        printf("Nenhuma aresta cadastrada.\n");
    }
}

// Limpa o grafo
void LimparGrafo() {

    InicializarGrafo();

    printf("\nGrafo limpo com sucesso!\n");
}

int main() {

    int opcao;

    InicializarGrafo();

    printf("Quantidade de vertices: ");
    scanf("%d", &numVertices);

    if (numVertices <= 0 || numVertices > MAX_VERTICES) {
        printf("Quantidade invalida de vertices!\n");
        return 0;
    }

    do {

        printf("\n========== MENU ==========\n");
        printf("1 - Inserir aresta\n");
        printf("2 - Mostrar matriz\n");
        printf("3 - Grau de um vertice\n");
        printf("4 - Grau de todos os vertices\n");
        printf("5 - Listar arestas\n");
        printf("6 - Limpar grafo\n");
        printf("0 - Sair\n");
        printf("==========================\n");

        printf("Opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {

            case 1:
                InserirAresta();
                break;

            case 2:
                MostrarMatriz();
                break;

            case 3:
                MostrarGrauVertice();
                break;

            case 4:
                MostrarTodosGraus();
                break;

            case 5:
                ListarArestas();
                break;

            case 6:
                LimparGrafo();
                break;

            case 0:
                printf("\nPrograma encerrado.\n");
                break;

            default:
                printf("\nOpcao invalida!\n");
        }

    } while(opcao != 0);

    return 0;
}