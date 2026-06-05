#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função de mesclagem para Merge Sort (ordem crescente)
void mesclar(int vetor[], size_t inicio, size_t meio, size_t fim) {
    size_t tamanho_pedaco = (fim - inicio) + 1;
    int *temp = (int *)malloc(tamanho_pedaco * sizeof(int));
    if (temp == NULL) {
        printf("Erro ao alocar memoria temporaria!\n");
        return;
    }

    size_t p1 = inicio, p2 = meio + 1, pTemp = 0;
    while (p1 <= meio && p2 <= fim) {
        if (vetor[p1] <= vetor[p2]) {
            temp[pTemp++] = vetor[p1++];
        } else {
            temp[pTemp++] = vetor[p2++];
        }
    }
    while (p1 <= meio) temp[pTemp++] = vetor[p1++];
    while (p2 <= fim) temp[pTemp++] = vetor[p2++];
    for (size_t i = 0; i < tamanho_pedaco; i++) vetor[inicio + i] = temp[i];
    free(temp);
}

// Função recursiva Merge Sort
void mergeSort(int vetor[], size_t inicio, size_t fim) {
    if (inicio < fim) {
        size_t meio = inicio + (fim - inicio) / 2;
        mergeSort(vetor, inicio, meio);
        mergeSort(vetor, meio + 1, fim);
        mesclar(vetor, inicio, meio, fim);
    }
}

// Preenche vetor com valores aleatórios
void PreencherVetor(int vetor[], size_t tamanho) {
    for (size_t i = 0; i < tamanho; i++) {
        vetor[i] = rand();
    }
}

int main() {
    // Range de tamanhos usado nos testes
    size_t tamanhos[] = {
        100, 500, 1000, 2000, 3000, 4000, 5000,
        7000, 10000, 15000, 20000, 25000, 30000};
    size_t num_tamanhos = sizeof(tamanhos) / sizeof(tamanhos[0]);

    srand((unsigned int)time(NULL));

    printf("--- CASO ALEATÓRIO (TEMPO DE CPU) ---\n");
    for (size_t i = 0; i < num_tamanhos; i++) {
        size_t tam = tamanhos[i];
        int *vetor = (int *)malloc(tam * sizeof(int));
        if (vetor == NULL) {
            printf("Erro ao alocar memória!\n");
            return 1;
        }
        PreencherVetor(vetor, tam);

        // Medição do tempo de CPU
        clock_t inicio = clock();
        mergeSort(vetor, 0, tam - 1);
        clock_t fim = clock();

        double tempo_cpu = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
        printf("Tempo de CPU para %zu elementos: %.6f segundos\n", tam, tempo_cpu);

        free(vetor);
    }
    return 0;
}
