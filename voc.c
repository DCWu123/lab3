#include <stdio.h>

int main ()
{
    char vocal[1]; //utilizamos 
    printf ("Introduzca una letra, recuerde que no puede ser número y solo puede ser una letra a la vez: \n");
    fgets (vocal, 1, stdin); //utilizamos la función sgets para poder atrapar el caso esquina en donde el usuario introduzca más de un caracter
    scanf ("%c", &vocal);
    //creamos un while loop
    do 
    {
        //creamos una función if
        if ( vocal== 'a' || vocal == 'e' || vocal== 'i ' || vocal== 'o' || vocal== "u" || vocal == 'A' || vocal== 'E'|| vocal=='I'||vocal=='O'||vocal =='U'){
            printf ("\n %c es una vocal", vocal);
        }
        else 
            printf ("\n %c es una consonante", vocal);

    }
    while (vocal !=0);
    return 0;

}