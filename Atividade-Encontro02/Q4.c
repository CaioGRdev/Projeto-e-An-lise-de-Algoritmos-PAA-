
#include <stdio.h>
#include <math.h>

#define N 40

void ler_vetores(int v1[], int v2[]);
int verificar_condicao(int v1[], int v2[], int x, int y);

int main(void)
{
    int v1[N], v2[N];
    int x, y;
    int resultado;

    ler_vetores(v1, v2);

    printf("Digite o valor de x (diferente de zero): ");
    scanf("%d", &x);

    printf("Digite o valor de y (diferente de zero): ");
    scanf("%d", &y);

    if (x == 0 || y == 0) {
        printf("x e y devem ser diferentes de zero.\n");
        return 1;
    }

    resultado = verificar_condicao(v1, v2, x, y);

    if (resultado == 1) {
        printf("A condicao e verdadeira.\n");
    } else {
        printf("A condicao e falsa.\n");
    }

    return 0;
}

void ler_vetores(int v1[], int v2[])
{
    int i;

    printf("Digite os 40 elementos do vetor V1:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &v1[i]);
    }

    printf("Digite os 40 elementos do vetor V2:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &v2[i]);
    }
}

int verificar_condicao(int v1[], int v2[], int x, int y)
{
    int i;
    long double soma = 0;
    long double produto = 1;

    for (i = 1; i < N; i += 2) {
        soma += (long double)x * fabsl((long double)v1[i]);
    }

    for (i = 0; i < N; i += 2) {
        produto *= (long double)y * v2[i];
    }

    return soma <= produto;
}
