#include <stdio .h>
int factorial (int n) 
{ 
    int i=1;
    while (n > 1) { 
        i=i * n;
        //int n = n − 1; 
        n = n -1;
    }
    return i ;
}
int main (int argc, int * argv[]) 

{ 
   /* int fac4 = factorial (4);
    int fac5 = factorial (5);
    printf ("4! = %d, 5! = %d\n", fac4 , fac5 ); 
    return 0;*/

    int fac, x;
    printf ("Ingrese un número:");
    if (scanf (("%d", &fac ) == 1)
    {
        x = factofial(f);
        printf ("%d! = %d\n", f, x);
    }
    else {
        printf ("No es valido\n")
    }
    return 0;
}


