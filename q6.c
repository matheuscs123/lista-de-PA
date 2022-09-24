#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pulo[5] = {1, 2, 3, 4, 5};
    int puloaux;
    int pulo1, pulo2, pulo3, pulo4;

    puloaux = pulo;

    pulo1 = *(pulo + 2);
    pulo2 = *(pulo + 4);
    pulo3 = pulo + 4;
    pulo4 = pulo + 2;

    printf("{1, 2, 3, 4, 5} \n");

    printf("%d ", pulo1);
    printf("| %d ", pulo2);
    printf("| %d ", pulo3);
    printf("| %d", pulo4);

    return 0;
}

/*
    RESOLUÇAO
    *(pulo + 2)
*/
