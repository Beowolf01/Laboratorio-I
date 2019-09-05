#define
#include <stdlib.h>
#include "array.h"

int main()
{
    int listadoDeEdades[cantidad];
    int maximo;
    inicializarArray(listadoDeEdades,cantidad);
    cargaSecuencialDelArray(listadoDeEdades, 10, "Ingrese su edad: ");
    mayor = maximoArray(listadoDeEdades);
    mostrarArray(listadoDeEdades, 10);


    /*int numero;
    int listadoDeNumeros[3];
    numero = 33;
    listadoDeNumeros[0] = 66;

    int i;

    for(i = 0; i<3; i++)
    {
        listadoDeNumeros[i] = 0; // para usar solo una linea
    }

    for(i = 0; i<3; i++)
    {
        printf("%d\n", listadoDeNumeros[i]);
    }*/

    return 0;
}
