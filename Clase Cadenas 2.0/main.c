#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 4
void DameElNombreDelMaximo(int array[], int cantidad);
int DameElMaximo(int array[], int cantidad);
int DameElIndiceDelMaximo(int array[], int cantidad);
void cargarConDatosEnteros(int array[], int cant);
void cargarNombres(char miArray[] [50], int cant);

int main()
{
    int notas [TAM];
    char nombres [TAM] [50];
    int asistencia[TAM];
    int i = 0;


    /*for(i;i<TAM;i++)
    {
        printf("Ingrese su edad: ");
        scanf("%d", &edades[i]);
        printf("Ingrese su nombre: ");
        fflush(stdin);
        gets(nombres[i]);
    }*/

    cargarConDatosEnteros(notas, TAM);
    cargarNombres(nombres, TAM);
    DameElIndiceDelMaximo()
    for(i;i<TAM;i++)
    {
        printf("Usted es %s y tiene %d anios de edad \n", nombres[i], edades[i]);
    }



    return 0;
}
void cargarConDatosEnteros(int array[], int cant)
    {
        int aux[]={55,12,18,23};
        int i;
        for(i=0;i<cant;i++)
        {
            //array[i]=i*10;
            array[i]=aux[i];
        }
    }
void cargarNombres(char miArray[] [50], int cant)
    {
        char aux[] [50]={"Jorge","Maria","Lorenzo","Pepe"};
        int i;
        for(i=0;i<cant;i++)
        {
            strcpy(miArray[i], aux[i]);
        }
    }
int DameElMaximo(int array[], int cantidad)
{
    int i;
    int maximo;
    for(i=0;i<cantidad,i++)
    {
        if(i==0||array[i]>maximo)
        {
            maximo=array[i];
        }
    }
    return maximo;
}
int DameElIndiceDelMaximo(int array[], int cantidad)
{
    int i;
    int indice;
    int maximo;
    maximo=DameElMaximo(array, cantidad);
    for(i=0;i<cantidad,i++)
    {
        if(array[i]==maximo)
        {
            indice=i;
        }
    }
    return indice;
}
void DameElNombreDelMaximo(char arrayPalabras[][50]int array[], int cantidad)
{
    int i;
    int indice;
    indice=DameElIndiceDelMaximo(array, cantidad);
    arrayPalabras[indice];
}
void getString(char mensaje[])
