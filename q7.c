#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[4];
    int *p, x;

    p = mat + 1;
    x = *p;
    printf("%d\n", x);

/*
    p = mat++;
    x = *p;
    printf("%d", x);
*/
/*
    p = ++mat;
    x = *p;
    printf("%d\n", x);
*/

    x = (*mat)++;
    printf("%d", x);

    return 0;
}

/*
    RESOLUÇAO
    Valido: p = mat + 1     (o acesso e da próxima posição do vetor)
    Invalido: p = mat++      para o operador ++ acrecentar +1 na memoria precisa ter memoria definida
    Invalido: p = ++mat       para o operador ++ acrecentar +1 na memoria precisa ter memoria definida
    Valido: x = (*mat)++
*/
