
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencherVetor(int v[], int tamanho);
void modificarVetor(int v[], int tamanho);
void imprimirVetor(int v[], int tamanho);

int main(void)
{
    int v[50];

    srand(time(NULL));

    preencherVetor(v, 50);

    printf("Vetor original:\n");
    imprimirVetor(v, 50);

    modificarVetor(v, 50);

    printf("\nVetor modificado:\n");
    imprimirVetor(v, 50);

    return 0;
}

void preencherVetor(int v[], int tamanho)
{
    int i;

    for (i = 0; i < tamanho; i++) {
        v[i] = (rand() % 100) + 1;
    }
}

void modificarVetor(int v[], int tamanho)
{
    int i, j;
    int soma = 0;

    for (i = 0; i < tamanho; i++) {

        for (j = 0; j < tamanho; j++) {
            if (i != j) {
                soma = soma + v[j];
            }
        }

        v[i] = soma;
        soma = 0;
    }
}

void imprimirVetor(int v[], int tamanho)
{
    int i;

    for (i = 0; i < tamanho; i++) {
        printf("A posicao %d do vetor tem valor: %d\n",
               i, v[i]);
    }
}
