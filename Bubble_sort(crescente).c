#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

// Função Bubble Sort
void bubbleSort(int vetor[], int tamanho) {
    bool trocou = true;
    int auxiliar;

    while (trocou) {
        trocou = false;
        for (int i = 0; i < tamanho - 1; i++) {
            if (vetor[i] > vetor[i + 1]) {
                auxiliar = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = auxiliar;
                trocou = true;
            }
        }
    }
}

int main() {
    // Lista de tamanhos para teste
    int tamanhos[] = {
         100, 500, 1000, 2000, 3000, 4000, 5000,
        7000, 10000, 15000, 20000, 25000, 30000, 40000, 50000, 70000, 100000
    };
    int num_tamanhos = sizeof(tamanhos) / sizeof(tamanhos[0]);

    srand(time(NULL));

    for (int t = 0; t < num_tamanhos; t++) {
        int tamanho = tamanhos[t];
        int vetor[tamanho];

        // Preenche o vetor já ordenado em ordem crescente
        for (int i = 0; i < tamanho; i++) {
            vetor[i] = i;  // 0, 1, 2, ..., tamanho-1
        }

        // Medir tempo de CPU
        clock_t inicio = clock();
        bubbleSort(vetor, tamanho);
        clock_t fim = clock();

        double tempo_gasto = ((double)(fim - inicio)) / CLOCKS_PER_SEC;

        printf("Vetor de tamanho %d (já ordenado) processado em %.6f segundos.\n",
               tamanho, tempo_gasto);

    
    }

    return 0;
}
