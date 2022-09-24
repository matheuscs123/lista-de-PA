#include <stdio.h>
#include <stdlib.h>

void ordenar(float *m, int n){
    int i, j;
    float aux;

    for(i=0; i<n;i++){
        for(j=i+1; j<n; j++){
            if(m[i]>m[j]){
                aux = m[j];
                m[j] = m[i];
                m[i] = aux;
            }
        }
    }
}


int main(void)
{
    float *m;
    int n, i, r;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    m = (float*) malloc(n*sizeof(float));



    for(i=0; i<n; i++){

            printf("Digite um valor : ");
            scanf("%f", &m[i]);


    }

    printf("\nvalores digitados { ");
    for(i=0; i<n; i++){
        printf("%f ", m[i]);
    }
    printf("}\n");

    ordenar(m,n);

    printf("\nMemoria depois da ordenacao { ");
    for(i=0; i<n; i++){
        printf("%f ", m[i]);
    }
    printf("}\n");

    free(m);
}
