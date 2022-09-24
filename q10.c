#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x[4];
    int a[4], j;
    float b[4];
    double c[4];

    printf("x(char):\n");
    for(j=0; j<4; j++){
        printf("x[%d] = %d, ", j, (x+j));
    }
    printf("\n\na(int):\n");
    for(j=0; j<4; j++){
        printf("x[%d] = %d, ", j, (a+j));
    }
    printf("\n\nb(float):\n");
    for(j=0; j<4; j++){
        printf("x[%d] = %d, ", j, (b+j));
    }
    printf("\n\nc(double):\n");
    for(j=0; j<4; j++){
        printf("x[%d] = %d, ", j, (c+j));
    }

    return 0;
}
