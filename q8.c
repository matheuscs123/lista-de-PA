#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[] = {4, 9, 13};
    int i;

    for(i=0; i<3; i++){
        printf("%d ", *(vet + i));
    }

    printf("\n");
    for(i=0; i<3; i++){
        printf("%X ", vet+1);
    }

    return 0;
}

/*
    RESOLU�AO
    no primeiro for os valores localizados nos enderecos de memorias do que vetor que s�o imprimidos
    no segundo for os endere�os de memorias onde � encontrado os valores do vetor que s�o imprimidos
*/
