#ifndef EJERCICIO10_H
#define EJERCICIO10_H
typedef struct 
{
    int libro;
    int ID;
    char titulo[100];
    char Autor[50];
    int año;
    int estado;
}Bibiloteca;
void ingresardatos(Bibiloteca *libro, int *n);
void mostrar(Bibiloteca *libro, int n);
void buscar(Bibiloteca *libro, int n);
void actulizar(Bibiloteca *libro, int n);
void eliminar(Bibiloteca *libro, int *n);

#endif // !EJERCICIO10_H