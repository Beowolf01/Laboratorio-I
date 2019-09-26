#include <stdio.h>


//Para tener la fecha de variable aunque esté en una estructura
typedef struct
{
    int dia;
    int mes;
    int anio;
}eFecha;

typedef struct
{
    int ID;
    char nombre[50];
    eFecha fechaNac;
}ePersona;

typedef struct
{
    char patente[50];
    eFecha fechaIngreso;
    int horaIngreso;
    int horaSalida;
    int idDuenio;
}eVehiculo;

void hardcoderPersona(ePersona miPersona[], int cant);
void mostrarDatos(ePersona miPersona[], int cant);
void hardcoderVehiculos(eVehiculo listaVehiculos[], int cant);
void mostrarVehiculos(ePersona miPersona[],eVehiculo vehiculos, int cant, int cantPersonas);
int buscarIndicePersona(ePersona miPersona[], int cant, int ID);

