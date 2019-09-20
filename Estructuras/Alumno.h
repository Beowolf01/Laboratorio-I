//En el .h se guardan estructuras, prototipos y defines (si son necesarios).
#include <stdio.h>
#include <string.h>
#include <stdio.h>
#define OCUPADO 1
#define LIBRE 0
typedef struct//Se usa para manipular mas facil. No guarda datos, es como un molde/plantilla.
{
    //campos o atributos
    int legajo;
    char nombre[50];
    int nota;
    int dni;
    int estado;
}eAlumno;

int buscarAlumnoPorLegajo(eAlumno*, int, int);
int buscarLibre(eAlumno[], int);
void inicializarAlumnos(eAlumno[], int);
void mostrarAlumno(eAlumno); //Siempre por debajo del struct.
eAlumno pedirAlumno();
int compararAlumnoPorLegajo(eAlumno, eAlumno);
void cargarAlumnos(eAlumno lista[], int cant);
void mostrarListadoDeAlumnos(eAlumno lista[], int cant);
void ordenarAlumnosPorNombre(eAlumno[], int cant);
void hardcoderAlumnos(eAlumno lista[], int cant);
