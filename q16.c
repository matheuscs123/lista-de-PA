#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


int compare(const void *a, const void *b){
    return ((int)a - (int)b);
}

int comparacao (float a, float b){
    if(a>b){
        return 1;
    }
    else if(a<b){
        return -1;
    }
    else{
        return 0;
    }
}

void jsort(float *m, int n, int (comparacao)(float, float)){
    int i, j, esp=1;
    float aux;

    for(i=0; i<n;i++){
        for(j=i+1; j<n; j++){
            if(comparacao(m[i],m[j]) == 1 && esp == 1){
                aux = m[j];
                m[j] = m[i];
                m[i] = aux;
            }
            else if(comparacao(m[i],m[j]) == -1 && esp == -1){
                aux = m[j];
                m[j] = m[i];
                m[i] = aux;
            }
        }
    }
}

int main(void)
{
    float *m1, *m2;
    int n, i;
    clock_t tempo1, tempo2, tempo3, tempo4;

    printf("qual o valor: ");
    scanf("%d", &n);

    m1 = (float*) malloc(n*sizeof(float));
    m2 = (float*) malloc(n*sizeof(float));


    for(i=0; i<n; i++){
        m1[i] = (float)rand()/RAND_MAX;
        m2[i] = (float)rand()/RAND_MAX;
    }


    tempo1 = clock();
    qsort(m1, n, sizeof(float), comparacao);
    tempo2 = clock() - tempo1;

    tempo3 = clock();
    jsort(m2, n, comparacao);
    tempo4 = clock() - tempo3;


    printf("\nexecucao: %d clicks (%f segundos)", tempo4, ((float)tempo4)/CLOCKS_PER_SEC);

    free(m1);
    free(m2);
}
