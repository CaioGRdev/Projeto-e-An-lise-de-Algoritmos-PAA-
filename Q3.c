
#include <stdio.h>

#define N 30

void preencher_vetor(int v[]);
int encontrar_maximo(int v[], int k);

int main(void)
{
    int v[N];
    int k;
    int resultado;

    preencher_vetor(v);

    printf("Digite o valor de k (1 a 4): ");
    scanf("%d", &k);

    if (k < 1 || k > 4) {
        printf("Valor de k invalido.\n");
        return 1;
    }

    resultado = encontrar_maximo(v, k);

    printf("Maior soma encontrada: %d\n", resultado);

    return 0;
}

void preencher_vetor(int v[])
{
    int i;

    for (i = 0; i < N; i++) {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &v[i]);
    }
}

int encontrar_maximo(int v[], int k)
{
    int i, j;
    int soma;
    int maior;

    maior = v[0];

    for (i = 0; i <= N - k; i++) {
        soma = 0;

        for (j = i; j < i + k; j++) {
            soma = soma + v[j];
        }

        if (i == 0 || soma > maior) {
            maior = soma;
        }
    }

    return maior;
}
