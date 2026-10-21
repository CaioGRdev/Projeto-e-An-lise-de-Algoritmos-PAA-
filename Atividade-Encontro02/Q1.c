#include <stdio.h>



int main() {
    int matriz [5][5] = {
    {0, 2, 8, 1, 7},
    {1, 5, 8, 2, 2},
    {3, 4, 0, 8, 1},
    {9, 1, 2, 7, 2},
    {3, 0, 1, 0, 4}
};
    int i, j;
    int soma =0;
//a)
for(i=0; i<1; i++){
    for(j=0;j<5;j++){
        soma += matriz[i][j];
    }
}
    printf("A soma dos elementos da matriz é: %d\n", soma);


//b)
soma=0;
    for(j=0;j<5;j++){
        for(i=0;i<5;i++){
            soma+= matriz[i][j];
        }
    }
    printf("A soma dos elementos da matriz é: %d\n", soma);
    return 0;
}