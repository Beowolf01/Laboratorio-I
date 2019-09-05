#include "array.h"
void mostrarArray(int myArray[], int cantidad)
    {
        int i;
        for(i = 0; i<cantidad; i++)
        {
            printf("%d\n", myArray[i]);
        }
    }
    int maximoArray(int myArray[], int cantidad)
    {
        int i;
        int mayor;
        for(i = 0; i<cantidad; i++)
        {
            if(myArray[i] > mayor || i==0)
            {
                mayor = myArray[i];
            }
        }
        return mayor;
    }
    void inicializarArray(int myArray[], int cantidad)
    {
        int i;
        for(i = 0; i<cantidad; i++)
        {
            myArray[i] = 0;
        }
        cantidad = 666;
    }
    void cargaSecuencialDelArray(int myArray[], int cantidad, char mensaje[])
    {
        int i;
        for(i = 0; i<cantidad; i++)
        {
            printf(mensaje);
            scanf("%d", &myArray[i]);
        }
    }
    float DamePromedio(int myArray[], int cantidad)
    {
        int i;
        long acumulador=;
        for (i = 0; i<cantidad; i++)
        {

        }
        return acumulador/
    }
    void Ordenar(int myArray[], int cantidad)
    {
        int i;
        int j;
        int aux;
        for(i=0;i<cantidad; i++)
        {
            for(j=i+1;j<cantidad;j++)
            {
                if(myArray[i]<myArray[j])
                {
                    aux = myArray[i];
                    myArray[i]=myArray[j];
                    myArray[j]=aux;
                }
            }
        }
    }

