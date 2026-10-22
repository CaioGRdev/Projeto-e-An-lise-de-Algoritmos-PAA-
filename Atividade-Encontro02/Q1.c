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
    int x;
    int v [5];
    int produto = 1;
    int p [5];
//a)
for(i=0; i<5; i++){
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

//c)
    soma=0;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(i!=j){
                soma+= matriz[i][j];
            }
        }
    }
    printf("A soma dos elementos da matriz é: %d\n",soma);

 //d)
    soma=0;
    for(j=0; j<5; j++){
        for(i=0;i<5;i++){
            if(i==j){
                soma = soma + matriz[i][j];
            }
        }
    }
    printf("A soma dos elementos da diagonal principal é: %d\n", soma);
    
//ou
    
    soma=0;
    for(i=0; i<5; i++){
        soma = soma + matriz[i][i];
        
    }
    printf("A soma dos elementos da diagonal principal é: %d\n", soma);
    
//e
    soma=0;
    for(i=0; i<5; i++){
        for(j=i+1; j<5; j++){
            soma = soma + matriz[i][j];
            
        }
    }
    printf("A soma da matriz triangular superior é: %d\n", soma);
//f    
    soma=0;
    for(i=0; i<5; i++){
        for(j=0; j<i; j++){
            soma = soma + matriz[i][j];
            
        }
    }
    printf("A soma da matriz triangular inferior é: %d\n", soma);
//g
    soma=0;
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            soma = soma + (matriz [i][j] * matriz [j][i]);
        }
    }
    printf(" A soma de aij * aji  na matriz triangular superior: %d\n\n", soma);
//h 
    soma=0;
    printf("----------Escolha um numero inteiro:");
    scanf("\n%d", &x);
    
    for(i=0; i<5; i++){
        for (j=0;j<5;j++){
            soma = soma + matriz[i][j];
        }
    }
    soma = soma * x;
    printf("A soma da matriz multiplicado pelo numero x é:%d\n", soma);
//i   
    soma=0;
    for(i=0; i<5; i++){
        
        for (j=0; j<5; j++){
            soma = soma + matriz [i][j];
            
        }
        v[i]= soma;
        soma=0;
        printf( "A posição %d do vetor é:%d\n", i, v[i]);
    }
//j    
    soma=0;
    for(j=0; j<5; j++){
        for(i=0;i<5;i++){
            produto = produto * matriz [i][j];
        }
        p[j] = produto;
        produto=1;
        printf( "\n\nA posição %d do vetor é:%d\n", j, p[j]);
    }
    
    
    

    
    return 0;
}