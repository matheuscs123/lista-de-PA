#include <stdio.h>

void inc (int *n)
{
   (*n)++ ;
}

int main ()
{
   void (*fp) (int *) ;         // function pointer
   fp = inc ;                   // fp points to inc

   int a = 0 ;

   printf ("a vale %d\n", a) ;
   inc(&a) ;                    // normal call

   printf ("a vale %d\n", a) ;
   fp(&a) ;                     // call using the function pointer

   printf ("a vale %d\n", a) ;

   return (0) ;
}

//como pedi a quest�o peguei esse codigo na internet
//Ponteiros para fun��es recebem argumentos de outras fun��es, e a fazendo a execu��o da fun��o apontada,

