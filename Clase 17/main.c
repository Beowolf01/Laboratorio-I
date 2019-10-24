#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int Id;
    float orden;
    char apellido;
}ePersona;

void inicializar (ePersona*, int);
void mostrar(ePersona*, int);
void

int main()
{
    int* punteroInt;
    float* punteroFloat;
    char* punteroChar;
    int i;
    for(i=0; i<5; i++)
    int pos;
    int numeroOrden[50];
    inicializar(numeroOrden, 50);

    mostrar(numeroOrden, 50);
    pos = 0;
    char opcion;
    return 0;
}

void inicializar(int* array, int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        &((array+i)->id)=-1;
    }
}

void ordenar (int* array, int tam)
{
    int i=0;
    int j=0;
    for(i=0;i<tam -1; i++)
    {
        for(j=i+1;j<tam;j++)
        {
            if((array+i)->orden > (array+j)->orden)
            {
                swap(array + i, array + j);
            }
        }
    }
}
void swap(int* a, int* b)
{
    int c;
    c= *a;
    *a = *b;
    *b = c;
}

void pedirDatos(ePersona* persona, int* Id)
{
    system("cls");
    printf("Ingrese el Apellido");
    fflush(stdin);
    gets(&(persona->apellido));
    printf("Ingrese el Orden");
    scanf("%f",&(persona->orden));
    persona->Id = Id;
}

int buscarProximoId(ePersona* array, int tam)
{
    int i = 0;
    int Id = -1;
    for(i=0; i<tam; i++)
    {
        if((array + i)->id > id)
        {
            id = (array + i)->id;
        }
    }
    return id+1;
}
//per[0].id
//per->id
//(per+0)->id
//(*per).id
//(*(per+0)).id
int buscarLibre(ePersona* array)
