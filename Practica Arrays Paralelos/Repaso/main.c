#include <stdio.h>
#include <stdlib.h>
#define T 4

void cargarEdadesTest(int miArray[], int cant);
void mostrarEdades(int miArray[], int cant);
void cargarNombresTest(char miArray[][50], int cant);
void mostrarNombresTest(char miArray[][50], int cant);
void cargarApellidosTest(char miArray[][50], int cant);
void mostrarApellidosTest(char miArray[][50], int cant);

int main()
{
    int datoNumericos[T];
    char letra;
    char palabra[T];
    char listadoDePalabras[T][50];

    cargarEdadesTest(datoNumericos, T);
    mostrarEdades(datoNumericos, T);
    cargarNombresTest(listadoDePalabras, T);
    mostrarNombresTest(listadoDePalabras, T);

    return 0;
}
void cargarEdadesTest(int miArray[], int cant)
{
    int i;
    int aux[]={22,33,18,55};
    for(i=0; i<cant; i++)
    {
        miArray[i]=aux[i];
    }
}
void mostrarEdades(int miArray[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        printf("%d\n", miArray[i]);
    }
}

void cargarNombresTest(char miArray[][50], int cant)
{
    char aux[][50]={"Alfredo", "Rogelio", "Julieta", "Pablo"};
    int i;
    for(i=0; i<cant; i++)
    {
        strcpy(miArray[i], aux[i]);
    }
}
void mostrarNombresTest(char miArray[][50], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        printf("\nNombres: %s", miArray[i]);
    }
}
