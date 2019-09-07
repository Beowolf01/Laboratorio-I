#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD 3

void mostrarUnArray(int parametroArray[], int cant);
void inicializarUnArray(int parametroArray[], int cant);
void cargaSecuencialDeUnArray(int parametroArray[], int cant);
int dameElMax(int parametroArray[], int cant);
int dameElIndicedelMax(int parametroArray[], int cant);
int main()
{
    int miArray[CANTIDAD];
    int indice;
    //mostrarUnArray(miArray[CANTIDAD]); No funciona
    //mostrarUnArray(miArray[]); Menos que menos
    //mostrarUnArray(miArray, CANTIDAD); //Va queriendo
    inicializarUnArray(miArray, CANTIDAD);
    //mostrarUnArray(miArray, CANTIDAD);
    cargaSecuencialDeUnArray(miArray, CANTIDAD);
    mostrarUnArray(miArray, CANTIDAD);
    int maximo=dameElMax(miArray, CANTIDAD);
    printf("\nmaximo: %d", maximo);//66 o 3
    int indiceMaximo=dameElIndicedelMax(miArray, CANTIDAD);
    printf("\nmaximo: %d", indiceMaximo);//1 o 2

    return 0;
}

void mostrarUnArray(int parametroArray[], int cant)
{
    int indice;

    for(indice=0;indice<cant;indice++)
    {
        printf("\n numero: %d", parametroArray[indice]);
    }
}
void inicializarUnArray(int parametroArray[], int cant)
{
    int indice;

    for(indice=0;indice<cant;indice++)
    {
        parametroArray[indice]=0;
    }
}
void cargaSecuencialDeUnArray(int parametroArray[], int cant)
{
    int indice;

    for(indice=0;indice<cant;indice++)
    {
        printf("\n ingrese numero: ");
        scanf("%d", &parametroArray[indice]);
    }
}
int dameElMax(int parametroArray[], int cant)
{
    int indice;
    int maximo;

    for(indice=0;indice<cant;indice++)
    {
        if(indice == 0 || parametroArray[indice]>maximo)
        {
            maximo=parametroArray[indice];
        }
    }
    return maximo;
}
int dameElIndicedelMax(int parametroArray[], int cant)
{
    int indice;
    int indiceDelMaximo;
    int maximo;

    for(indice=0;indice<cant;indice++)
    {
        if(indice == 0 || parametroArray[indice]>maximo)
        {
            maximo=parametroArray[indice];
            indiceDelMaximo=indice;
        }

    }
    return indiceDelMaximo;
}
