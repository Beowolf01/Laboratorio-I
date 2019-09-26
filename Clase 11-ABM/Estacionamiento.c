#include "Estacionamiento.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void hardcoderPersona(ePersona miPersona[], int cant)
{
    int dia[]={33,22,25,11};
    int mes[]={3,4,12,11};
    int anio[]={1990,1980,2000,1995};
    char nombre[][50]={"Maria", "Ezequiel", "German", "Yanina"};
    int i;

    for(i=0; i<cant; i++)
    {
        miPersona[i].fechaNac.anio = anio[i];
        miPersona[i].fechaNac.mes = mes[i];
        miPersona[i].fechaNac.dia = dia[i];
        strcpy(miPersona[i].nombre, nombre[i]);
        miPersona[i].ID=i+1;
    }

}

void mostrarDatos(ePersona miPersona[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        printf("\nNombre: %s \t", miPersona[i].nombre);
        printf(" dia: %d \t", miPersona[i].dia);
        printf(" mes: %d \t", miPersona[i].mes);
        printf(" anio: %d \t", miPersona[i].anio);
        printf(" ID: %d \t", miPersona[i].ID);
    }
}

void hardcoderVehiculos(eVehiculo listaVehiculos[], int cant)
{
    char patente[][50]={"AAA111","BBB222","AA111BB","0J222BB"};
    int horaIngreso[]={10,9,8,11};
    int horaSalida[]={11,11,11,12};
}

buscarIndicePersona(ePersona miPersona[], int cant, int ID)
{
    int i;
    for(i=0;i<cant;i++)
    {
        if(ID == miPersona[i].ID)
            return i;
    }
    return-1
}

void mostrarVehiculos(ePersona miPersona[],eVehiculo vehiculos, int cant, int cantPersonas)
{
    int i;

    for(i=0; i<cant; i++)
    {
        printf("\nNombre: %s \t", miPersona[buscarIndicePersona(miPersona, cant, eVehiculo[i]].nombre);
        printf(" dia: %d \t", eVehiculo[i].fechaIngreso.dia);
        printf(" mes: %d \t", eVehiculo[i].fechaIngreso.mes);
        printf(" anio: %d \t", eVehiculo[i].fechaIngreso.anio);
        printf(" Hora ingreso: %d \t", eVehiculo[i].horaIngreso);
        printf("Patente: %s \t", eVehiculo[i].patente);
    }
}
