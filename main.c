#include <stdio.h>
#include <string.h>
#include "Ejercicio10.h"
int main(){
    int opc; 
    int n=0;
    Bibiloteca libro[20];
    do
    {
        printf ("\n===========MENU=========\n");
        printf ("1.Registrar libros\n");
        printf ("2.Mostrar libros\n");
        printf ("3.Buscar libros\n");
        printf ("4.Actulizar estado  del libro\n");
        printf ("5.Eliminar libros\n");
        printf ("6.Salir\n");
        printf (">>>>>");
        scanf ("%d", &opc);

        switch (opc)
        {
        case 1:
        ingresardatos(libro, &n);
        break;
        
        case 2:
        mostrar(libro, n);
        break;

        case 3:
        buscar(libro, n);
        break;

        case 4:
        actulizar(libro, n);
        break;

        case 5:
        eliminar (libro, &n);
        break;

        case 6:
        printf ("Saliendo del programa\n");
        break;
        default:
        printf ("Opcion invalida. Intente de nuevo\n");
            break;
        }
    } while (opc !=6);
    
}