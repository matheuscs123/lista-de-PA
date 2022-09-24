 #include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){  // Funcao de comparacao de valores
    return ((int)a - (int)b);           // Retorna um valor que representa qual valor e maior que o outro ou tem o mesmo sao iguais
}


int main(void)
{
    float *m;       // Variavel ponteiro
    int n, i;    // outras variaveis

    printf("quantos numeros vai querer: "); // Perguntan a quantidade de numeros
    scanf("%d", &n);                                                // recebendo os valores

    m = (float*) malloc(n*sizeof(float));   // Transformando a variavel ponteiro em um vetor de (n) valores


    for(i=0; i<n; i++){                                     // Funcao de loop de tamanho (n)
            printf("Digite um valor : ");   // Pergunta ao usuario qual o valor
            scanf("%f", &m[i]);                             // recebe os valores
        }


    printf("\nvalores digitados { ");
    for(i=0; i<n; i++){
 printf("%f ", m[i]);            // Imprime na tela os valores do vetor
    }
    printf("}\n");

    qsort(m, n, sizeof(float), compare);    // Chamada de funcao com o objetivo de reorganizar o vetor para que seus valores sejam crescente

    printf("\nMemoria ordenada por qsort { ");  // Informa o usuario que sera mostrado o vetor apos ser reorganizado
    for(i=0; i<n; i++){
        printf("%f ", m[i]);                    // Imprime na tela os valores apos ser reorganizado
    }
    printf("}\n");

    free(m);    // Libera a memoria onde o vetor estava sendo armazenado

    return 0;
}
