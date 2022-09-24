#include <stdio.h>
#include <stdlib.h>

int comparacao (float y, float z){
    if(y>z){
        return 1;
    }
    else if(y<z){
        return -1;
    }
    else{
        return 0;
    }
}

void usort(float *m, int n, int (comparacao)(float, float)){
    int i, j, esp;
    float aux;

    printf("\n Crescente(1) ou Decrescente(0)? escolha: ");
    scanf("%d", &esp);

    for(i=0; i<n;i++){
        for(j=i+1; j<n; j++){
            if(comparacao(m[i],m[j]) == -1 && esp == 0){
                aux = m[j];
                m[j] = m[i];
                m[i] = aux;
            }
            else if(comparacao(m[i],m[j]) == 1 && esp == 1){
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

    printf("quantos numeros para ordenar ");
    scanf("%d", &n);

    m = (float*) malloc(n*sizeof(float));



    for(i=0; i<n; i++){
            printf("Digite um valor: ");
            scanf("%f", &m[i]);

    }

    printf("\nvalores digitados { ");
    for(i=0; i<n; i++){
        printf("%f ", m[i]);
    }
    printf("}\n");

    usort(m, n, comparacao);

    printf("\n apos ordenacao { ");
    for(i=0; i<n; i++){
        printf("%f ", m[i]);
    }
    printf("}\n");

    free(m);
}
