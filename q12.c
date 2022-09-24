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

//como pedi a questão peguei esse codigo na internet
//Ponteiros para funções recebem argumentos de outras funções, e a fazendo a execução da função apontada,

