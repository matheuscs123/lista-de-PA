#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=3, j=5;
    int *p, *q;
    p=&i;
    q=&j;
int a,b,c,d;

    a = p==&i;
    b = *p - *q;
    c = **&p;
    d = 3-*p/(*q)+7;
    printf("%d \n", a);
    printf("%d \n", b);
    printf("%d \n", c);
    printf("%d", d);

    return 0;
}

//resultado
//1
//-2
//3
//10
