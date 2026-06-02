#include <stdio.h>
#include <string.h>
#include "Ejercicio10.h"

void ingresardatos(Bibiloteca *libro, int *n){
    printf ("Ingrese cuantos libro quiere introducir:");
    scanf ("%d", n);

    for (int i = 0; i < *n; i++)
    {
        printf ("Ingrese el ID %d\n:", i + 1);
        scanf ("%d", &libro[i].ID);


        printf ("Ingrese el titulo del libro %d\n:", i + 1);
        scanf ("%s", libro[i].titulo);

        printf ("Ingrese el Autor del libro %d\n:", i + 1);
        scanf ("%s", libro[i].Autor);

        do
        {
            printf ("Ingrese el año de publicacion %d\n:", i + 1);
            scanf ("%d", &libro[i].año);
            if (libro[i].año<0)
            {
                printf ("Error.Intente de nuevo\n");
            }
            
        } while (libro[i].año<0);

        printf ("Ingrese si el estado (0=disponible | 1=Ocupado):");
        scanf ("%d", &libro[i].estado);
    }
}
void mostrar(Bibiloteca *libro, int n){
    printf ("LIBROS REGISTRADOS");

    printf ("\ntID\tTitulo\t\tAutor\tAño\t\tEstado\n");
    printf ("=========================================\n");

    for (int i = 0; i < n; i++) 
    {
    printf("%d\t%s\t\t%s\t\t%d\t%s\n",
           libro[i].ID,
           libro[i].titulo,
           libro[i].Autor,
           libro[i].año,
           libro[i].estado == 0 ? "Disponbile" : "Ocupado");
    }
}
void buscar(Bibiloteca *libro, int n){
    int buscar;
    printf ("Ingrese el ID del libro que quiere buscar:");
    scanf ("%d", &buscar);

    for (int i = 0; i < n; i++)
    {
        if(libro[i].ID==buscar){
        printf ("LIBRO ENCONTRADO\n");

        printf ("ID: %d\n",libro[i].ID);
        printf ("Titulo del libro: %s\n",libro[i].titulo);
        printf ("El Autor : %s\n",libro[i].Autor);
        printf ("El año: %d\n",libro[i].año);
        if(libro[i].estado==0){
        printf ("Libro disponible");
        }else{
        printf ("Libro Ocupado\n");
        }
        }
    }
}

void actulizar(Bibiloteca *libro, int n){
    int actulizar;
    printf ("INgrese la id que quieras actulizar:");
    scanf ("%d", &actulizar);

    for (int  i = 0; i < n; i++)
    {
        if (libro[i].ID==actulizar){

            printf ("ACTULIZE EL ESTADO\n");

            printf ("Ingrese si esta disponible (0=disponible | 1=Ocupado):");
            scanf ("%d", &libro[i].estado);
        }
    }
}
void eliminar(Bibiloteca *libro, int *n){
    int eliminar;
    printf ("Ingrese el id que quiera eliminar:");
    scanf ("%d", &eliminar);

    for (int i = 0; i < *n; i++)
    {
        if(libro[i].estado==eliminar){
            for (int j = 0; j < *n-1; j++)
            {
                libro[j]=libro[j+1];
            }
            
        }
    (*n)--;
    }
}