//hacer un programa que imprima los primeros 100 triangulares

// 
#include <stdio.h>
 
// Funcion para crear los numeros triangulares
// usamos void para que la función no tenga parámetros dentro de la lista
void triangular(int n)
{
    int i, x = 1, z = 1;
    // usamos j y k como 1 para que siempre sean verdaderos
 
    // por cada iteraccion se incrementa j por 1 j by 1
    // luego se añade a k
    for (i = 1; i <= n; i++) {
        
        printf(" %d \n", z); //usamos %d para que nos imprima un numero entero con base 10
        x = x + 1; 
        z = z + n; 
    }
}
// Funcion completa para imprimir los 100 numeros
int main()
{
    int n = 100;
    triangular(n);
    return 0;
}